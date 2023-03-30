//01:17:00
//2 submits

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000000002

ll compute(ll n)
{
    ll m=n/2;
    if(n%2==0)
    {
    return (m*(m+1)*4)+1;
    }
    else{
        ll ans = (n+1)/2;
        ans*=n;
//        cout<<ans<<"\n";
        ans-=m*(m+1);
        return ans*4;
    }
}

ll bin(ll low, ll high, ll n)
{
    if(high >=low)
    {
    ll mid=(high+low)/2;
    if(compute(mid)>=n&&compute(mid-1)<n) return mid;
    else if(compute(mid)<n) return bin(mid+1,high,n);
    else return bin(low,mid-1,n);

    }
    else return 0;

}

void sol()
{
    ll n;
    cin>>n;
    if(n<=1) {
    cout<<"0\n";
    return;
    }
    else if(n<=4){
    cout<<"1\n";
    return;}

    //gotta find a key whose comp value is >= n and key-a<n
    ll key=bin(2,mx,n);
    cout<<key<<"\n";
    return;




}


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        sol();
    }
    return 0;
}
