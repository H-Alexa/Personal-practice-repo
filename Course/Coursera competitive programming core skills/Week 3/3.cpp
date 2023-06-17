#include<bits/stdc++.h>
using namespace std;
typedef double db;
#define fr(i,n) for(i=0;i<n;i++)
#define dif 0.000000001
int main()
{
    int n;
    cin>>n;
    int i;
    db ans,x;
    ans=0;
    fr(i,n)
    {
        cin>>x;
        ans+=x+(1.0/x);
    }
    cout<<fixed<<setprecision(11)<<ans<<"\n";
    return 0;
}
