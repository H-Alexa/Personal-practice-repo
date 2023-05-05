#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[2009][2009];

int main()
{
    ll cn,n;
    cin>>n;
    ll i;
    cn=0;
    for(i=0;i<n;i++)
    {
        cin>>ar[0][i];
        cn+=ar[0][i];
        if(i>0)
        {
            ar[2][i] = min(ar[0][i],ar[0][i-1]);
        }
    }
    ll t=2;
    while(t<=n)
    {
        for(i=t-1;i<n;i++)
        {
            cn+=ar[t][i];
            if(i>=t)
            {
                ar[t+1][i] = min(ar[t][i-1],ar[0][i]);
            }
        }
        t++;
    }
//    cn+=ar[n][n-1];
    cout<<cn<<"\n";
    return 0;
}
