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
#define siz 100009
//int ar[siz];
bool check(ll a, ll b, int rem)
{
    //cout<<a<<" "<<b<<" "<<rem<<"\n ";
    if(a<b||a<0||b<0)
    {
      //  cout<<"f\n";
    return false;
    } 
    if(rem<=0) return true;
    //if(b==0&&a>0&&rem>0) return false;
    return check(b,a-b,rem-1);
    return true;
}
void sol()
{
    ll n,k;
    cin>>n>>k;
    ll cn=0;
    for(ll i=n/2; i<=n;i++)
    {
        if(check(i,n-i,k-3))
        cn++;
    }
    cout<<cn<<"\n";
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    sol();
    return 0;
}

