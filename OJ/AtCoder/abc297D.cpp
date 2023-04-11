//AC solution

#include<bits/stdc++.h>
using namespace std;
#define S " "
char in[109][109];
#define ll long long
void sol()
{
    ll a=1597, b = 987;
    cin>>a>>b;
    ll r=10000000,cn=0;
    ll mx=a,mn=b;
    while(r!=0)
    {
        mx=max(a,b);
        mn=min(a,b);
        if(mx%mn==0) cn+=(mx/mn)-1;
        else
            cn+=mx/mn;
        r=mx%mn;
        a=mn;
        b=r;
    }
    cout<<cn<<"\n";
    return;

}

int main()
{
    sol();
    return 0;
}


