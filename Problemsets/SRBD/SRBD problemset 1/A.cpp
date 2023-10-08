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
#define siz 109
int ar[4][509];
int in[siz];
int coin(int m,int n)
{
    int i,j;
    for(i=0;i<=m;i++) ar[0][i]=0;
    for(i=0;i<n;i++)
    {
        int x=in[i];
        // cout<<x<<" x\n";
        if(x>m) continue;
        for(j=0;j<=m;j++) {
            if(x>j) ar[1][j]=ar[0][j];
            else if(x==j) ar[1][j] = x;
            else ar[1][j]=max(ar[0][j],x+ar[0][j-x]);
        }
        
        fr(j,m+1) ar[0][j]=ar[1][j];
    }
    return ar[0][m];
}
void sol()
{
    int n;
    cin>>n;
    int i;
    int cn=0;
    fr(i,n) {cin>>in[i];
    cn+=in[i];
    }
    int m=cn/2;
    int x = coin(m,n);
    cout<<cn-(x+x)<<"\n";
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

