//AC solution
//Problem link https://codeforces.com/contest/1829/problem/E


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
#define siz 1005
bool vis[siz][siz];
ll ar[siz][siz];
ll n,m;
//U D R L
ll cn;
void dfs(ll i, ll j)
{
    if(vis[i][j]) return;
    cn+=ar[i][j];
    vis[i][j]=true;
    if(i>0)
    {
        if(!vis[i-1][j])
            dfs(i-1,j);
    }
    if(j>0)
    {
        if(!vis[i][j-1])
            dfs(i,j-1);
    }
    if(i<n-1)
    {
        if(!vis[i+1][j])
            dfs(i+1,j);
    }
    if(j<m-1)
    {
        if(!vis[i][j+1])
            dfs(i,j+1);
    }
    return;
}

void sol()
{
//    memset(vis, false, sizeof(vis));
    cin>>n>>m;
    ll i,j;
    fr(i,n)
    {
        fr(j,m)
        {
            cin>>ar[i][j];
            if(ar[i][j]==0) vis[i][j]=true;
            else vis[i][j]=false;
        }
    }
    ll ans=0;
    fr(i,n)
    {
        fr(j,m)
        {
            if(!vis[i][j])
            {
                cn=0;
                dfs(i,j);
                ans=max(ans,cn);
            }
        }
    }
    cout<<ans<<"\n";
    return;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }

    return 0;
}
 
