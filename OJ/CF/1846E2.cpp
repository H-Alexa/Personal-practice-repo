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
ll ar[1000009];
#define mx 1000000000000000009
void sett()
{
    ll i,n=2;
    ll maaxx = 0;
    i=1;
    while(n<100009)
    {
        ll x = n;
        ll ls = x*x*x;
        x=1+x+x*x;
        while(x<=mx)
        {
            i++;
            maaxx = max(x,maaxx);
            //cout<<ar[i-1]<<" "<<i<<" ";
            x+=ls;
            ls*=n;
        }
        n++;
    }
    cout<<i<<" "<<maaxx<<"\n";
}


int main()
{
    sett();
    // int t,n;
    // cin>>t;
    // while(t--)
    // {
    //     cin>>n;
    //     if(ar[n]) cout<<"YES\n";
    //     else cout<<"NO\n";
    // }
    return 0;
}

