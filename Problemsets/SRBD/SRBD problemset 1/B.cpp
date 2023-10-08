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
ll ar[40][200009];
ll d[40],v[40];
ll dc[40],vc[40];
ll c;
void sol(ll t)
{
    if(c>0){
    cout<<"\n";
    }
    c=10;
    ll w;
    cin>>w;
    ll mul=3*w;
    ll sob= t/mul;
    ll n;
    cin>>n;
    int i;
    fr(i,n) cin>>d[i]>>v[i];

    for(i=0;i<=sob;i++) ar[0][i]=0;
    for(int k=0;k<n;k++)
    {
        for(int j=0;j<=sob;j++)
        {
            if(d[k]>j) ar[k+1][j]=ar[k][j];
            else{
                ar[k+1][j]=max(ar[k][j],v[k]+ar[k][j-d[k]]);
            }
        }
    }
    cout<<ar[n][sob]<<"\n";
    ll cn=0;
    i=n;
    int j=sob;
    int pn = 0;
    while(i>0&&j>0)
    {
        if(ar[i][j]==ar[i-1][j]) i--;
        else
        {
            cn++;
            dc[pn]=d[i-1];
            vc[pn++]=v[i-1];
            j-=d[i-1];
            i--;
        }
    }
    cout<<cn<<"\n";
    frv(i,pn)
    {
        cout<<dc[i]<<" "<<vc[i]<<"\n";
    }
    return;
}
int main()
{
    int t;
    c=0;
    while(cin>>t)
        sol(t);
    return 0;
}

