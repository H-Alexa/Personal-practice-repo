#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    if(n<6) {
    cout<<"1\n";
    return 0;
    }
    ll ans=n/5;
    if(n%5!=0) ans++;
    cout<<ans<<"\n";

}
