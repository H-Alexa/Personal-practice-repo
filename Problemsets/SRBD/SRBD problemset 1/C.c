#include <stdio.h>
int prime[5200], Pt;
int ans[1121][15] = {};
void sieve() {
    char mark[10000] = {};
    Pt = 0;
    int i, j;
    for(i = 2; i < 10000; i++) {
        if(mark[i] == 0) {
            prime[Pt++] = i;
            for(j = 2; i*j < 10000; j++)
                mark[i*j] = 1;
        }
    }
}
void build() {
    ans[0][0] = 1;
    int i, j, k;
    for(i = 0; i < Pt; i++) {
        for(j = 1140; j >=prime[i]; j--) {
            for(k = 1; k <= 14; k++)
                ans[j][k] += ans[j-prime[i]][k-1];
        }
    }
}
int main() {
    sieve();
    build();
    int n, m;
    while(scanf("%d %d", &n, &m) == 2) {
        if(n == 0 && m == 0)
            break;
        printf("__%d__\n", ans[n][m]);
    }
    return 0;
}
