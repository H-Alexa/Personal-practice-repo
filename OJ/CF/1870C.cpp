#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ino freopen("in.txt", "r", stdin);freopen("out.txt", "w", stdout);

#define fr(i,n) for(i=0;i<n;i++)
#define frs(i,a,n) for(i=a;i<=n;i++)
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
int ar[siz];
int l[siz], r[siz];
int fl[siz];
int n;
int pref(int pt,int val)
{
    for(int i=pt+1;i<=n;i++)
    {
        if(ar[i]<val) pt++;
        else break;
    }
    return pt;
}
int suf(int pt, int val)
{
    for(int i=pt-1;i>0;i--)
    {
        if(ar[i]<val) pt--;
        else break;
    }
    return pt;
}
void sol()
{
    memset(fl,0,sizeof(fl));
    int k;
    cin>>n>>k;
    int i,j;
    ar[0]=0;
    ar[n+1]=0;
    frs(i,1,n) {
        cin>>ar[i];
        if(fl[ar[i]]==0) fl[ar[i]]=i;
    }
    int ptl=0,ptr=n+1;

    frs(i,1,k)
    {
        if(fl[i]==0) cout<<"0 ";
        else{
            ptl=pref(ptl,i);
            ptr=suf(ptr,i);
            cout<<2*(ptr-ptl-1)<<" ";
        }
    }
    cout<<"\n";
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

