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
#define siz 1009
char ar[siz][siz];
int cn;
void calc(int l, int r)
{
    if(l>=r) return;
    int i;
    int zer,on;
    for(i=0;i<r-l;i++)
    {
        zer=0;on=0;
        // cout<<r-i<<" "<<l+i<<" "<<r<<" "<<l<<"\n";
        if(ar[r-i][l]=='0') zer++; else on++;
        if(ar[l][l+i]=='0') zer++; else on++;
        if(ar[l+i][r]=='0') zer++; else on++;
        if(ar[r][r-i]=='0') zer++; else on++;
        cn+=min(zer,on);
    }
    calc(++l,r-1);
}
void sol()
{
    cn=0;
    int n,i;
    cin>>n;
    fr(i,n) cin>>ar[i];
    calc(0,n-1);
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