#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ino freopen("in.txt", "r", stdin);freopen("out.txt", "w", stdout);

#define fr(i,n) for(i=0;i<n;i++)
#define frs(i,a,n) for(i=a;i<n;i++)
#define frv(i,n) for(i=n-1;i>=0;i--)

#define ne cout<<"\n";
#define cas(i) cout<<"Case #"<<i<<": "

#define vi vector <int>
#define vpi vector <pair <int,int> >
#define vpin(v,a,b) v.push_back(make_pair(a,b))
#define vsort(v) sort(v.begin(),v.end());
#define all(v) ((v).begin()),((v).end())
#define sz(v) ((int)((v).size()))

#define todegree(rad) rad*(180.0/pi)
#define isnttriangle(a,b,c) (a+b<c||a+c<b||b+c<a)
#define pi acos(-1)
#define siz 200009
ll solu(ll a, ll b, ll n)
{
    if(b==0) return a;
    ll ans=0;
    ll mul=1;
    ll mx = max(a,b);
    int al,bl;
    while(mx>0)
    {
        mx/=2;
        al=a%2;
        bl=b%2;
        a/=2;
        b/=2;
        
        if(bl==1)
        {
            if(n%2==1) ans+=mul; 
            // cout<<bl<<" "<<mul<<" "<<ans<<"\n";
        }
        else{
            ans+=al*mul;
        }
        if(mx<1) break;
        mul*=2;
    }
    return ans;
    
}
void sol()
{
    ll n,m,b;
    cin>>n>>m;
    ll a=0;
    for(int i=0;i<n;i++)
    {
        ll j;
        cin>>j;
        a=a^j;
    }
    b=0;
    for(int i=0;i<m;i++)
    {
        ll j;
        cin>>j;
        b=(b|j);
    }
    // cout<<"Yeee: ";
    if(n%2==0)
    {
        cout<<solu(a,b,n)<<" "<<a<<"\n";
    }
    else cout<<a<<" "<<solu(a,b,n)<<"\n";
    return;
}
int main()
{
    int t;
    cin>>t;
    int x=t;
    while(t--)
        sol();
    return 0;
}

