
#include<bits/stdc++.h>
using namespace std;
#define siz 100009
#define ll long long
void sol()
{
    ll n,i;
    ll x=0;
    cin>>n;
    ll lo,hi;
    lo=0;
    hi=26;
    for(i=1;;i++)
    {
        if(n<=hi)
        {
            x=(n-lo)/i;
            if((n-lo)%i!=0) x++;
            cout<<(char)(x+'A'-1)<<"\n";
            return;
        }
        lo=hi;
        hi=hi+(26*(i+1));
    }
}

int main()
{
        int T,i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cout<<"Case #"<<i<<": ";
        sol();
    }
    return 0;

}

