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
#define siz 100009
//int ar[siz];



void solve()
{
    ll n,k,ans;
    cin>>n>>k;
//    fr(i,n) cin>>ar[i];
    if(k==1||n==1)
    {
        cout<<"1\n";
    }
    else if(n==0)
    {
        cout<<"2\n";
        cout<<n+1<<" 1\n";
    }
    else
    {
        cout<<"2\n";
        cout<<n-1<<" 1\n";
    }

        cout<<n<<" "<<k<<"\n";
    return;
}


int main()
{
    ll T,i,j;
    cin>>T;
    while(T--)
//    for(i=1;i<=T;i++)
    {
    solve();

    }
    return 0;
}


