//Both G1 and G2
//AC solution
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
ll ar[siz];

bool sol()
{
    ll mx,i,n;
    cin>>n;
    fr(i,n) cin>>ar[i];
    mx=ar[0];
    if(n==1)
    {
        if(mx==1)
            return true;
        return false;
        }
    sort(ar,ar+n);
    mx=ar[0];
    if(mx>1) return false;
    frs(i,1,n)
    {
        if(ar[i]>mx) return false;
        mx+=ar[i];
    }
    return true;
}

void fin(bool a)
{
    if(a) cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    ll mx,i,t,n;
    cin>>t;
    while(t--)
    {
        fin(sol());
    }
    return 0;
}

