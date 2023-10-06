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
#define md 998244353
char ar[siz];
ll pre[siz];
void precal()
{
    pre[0]=1;
    pre[1]=1;
    for(ll i=2;i<siz;i++)
    {
        pre[i]=(pre[i-1]*i)%md;
        // if(i<1000) cout<<pre[i]<<"\n";
    }
    return;
}
void sol()
{
    cin>>ar;
    int n = strlen(ar);
    ll sm, m,ans,cn;
    cn=0;
    ans=1;
    ll oc=0;
    for(int i=0;i<n;i++)
    {
        sm=0;
        char c = ar[i];
        while(ar[i]==c&&i<n)
        {
            i++;
            sm++;
        }
        
        i--;
        cn+=(sm-1);
        ans=(ans*sm)%md;
        oc++;
    }
    ans=(ans*pre[n-oc])%md;
    cout<<cn<<" "<<ans<<"\n";
    return;
}
int main()
{
    precal();
    int t;
    cin>>t;
    while(t--)
        sol();
    return 0;
}

