#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,ans=0;
    cin>>m>>n;
    if(m>n)
    {
        if(m%2==1)
        {
            ans=n/2;
        }
        m=m/2;
        ans+=m*n;
    }
    else{
        if(n%2==1)
        {
            ans=m/2;
        }
    n/=2;
        ans+=m*n;
    }
        cout<<ans<<"\n";
    return 0;
}
