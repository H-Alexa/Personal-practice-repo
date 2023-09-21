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
#define vvi vector<vector<int>>
#define vpi vector <pair <int,int> >
#define vpin(v,a,b) v.push_back(make_pair(a,b))
#define vsort(v) sort(v.begin(),v.end());
#define all(v) ((v).begin()),((v).end())
#define sz(v) ((int)((v).size()))
#define pi pair<int,int>

#define todegree(rad) rad*(180.0/pi)
#define isnttriangle(a,b,c) (a+b<c||a+c<b||b+c<a)
#define siz 100009

bool comp(const pi &a, const pi& b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return (a.first>b.first);
}
//int ar[siz];
pair<int,int> process(vi& smth, int h, int n)
{
    sort(smth.begin(),smth.end());
    int t=0;
    int cn=0;
    int p=0;
    int i=0;
    while(t+smth[i]<=h&&i<n)
    {
       // cout<<smth[i]<<" _ ";
        cn++;
        t+=smth[i];
        p+=t;
        i++;
    }
   // cout<<"\n";
   // cout<<cn<<" "<<p<<"\n";
    pair<int,int> s;
    s={cn,p};
    return s;
}
void sol()
{
    vpi cons;
    int n,m,h,x;
    cin>>n>>m>>h;
    vi temp;
    int i,j;
    pi og;
    pi ptemp;
    fr(i,n)
    {
        fr(j,m)
        {
            cin>>x;
            temp.push_back(x);
        }
        ptemp = process(temp, h,m);
        if(i==0) og=ptemp;
        cons.push_back(ptemp);
        temp.clear();
    }
    sort(cons.begin(),cons.end(),comp);
    for(i=0;i<cons.size();i++)
    {
        //cout<<cons[i].first<<" "<<cons[i].second<<"\n";
    }
    fr(i,n)
    {
        if(cons[i].first==og.first&&cons[i].second==og.second)
        {
            cout<<i+1<<"\n";
            return;
        }
    }
    return;

}
int main()
{
    int t;
    cin>>t;
    while(t--) sol();
    return 0;
}

