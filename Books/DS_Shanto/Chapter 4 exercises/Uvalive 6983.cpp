#include<bits/stdc++.h>
using namespace std;
#define siz 1009

bool cnt[siz];

void sol(int n)
{
    memset(cnt,false,sizeof(cnt));
    int x,ans;
    ans=1;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(cnt[x])  ans=0;
        cnt[x]=true;
    }
    if(ans) cout<<"YES\n";
    else cout<<"NO\n";
    return;

}
int main()
{
    int T,N,i;
    cin>>T;
    while(T--)
    {
        cin>>N;
        sol(N);

    }
}
