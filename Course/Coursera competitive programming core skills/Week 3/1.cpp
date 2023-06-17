#include<bits/stdc++.h>
using namespace std;
typedef double db;
#define fr(i,n) for(i=0;i<n;i++)
#define dif 0.000000001
db a[109],b[109];
int main()
{
    int n;
    cin>>n;
    db asum=0,bsum=0;
    int i;
    fr(i,n) {
    cin>>a[i];
    asum+=a[i];}
    fr(i,n) {
    cin>>b[i];
    bsum+=b[i];
    }
    if(abs(asum-bsum)<=dif) cout<<"SUM(A)=SUM(B)\n";
    else if(asum>bsum) cout<<"SUM(A)>SUM(B)\n";
    else cout<<"SUM(A)<SUM(B)\n";
    return 0;
}
