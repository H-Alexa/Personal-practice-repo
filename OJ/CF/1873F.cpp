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
#define siz 200009
ll f[siz], h[siz];
ll n,k;
int bs(int l, int r, int en)
{
    cout<<l<<" "<<r<<" "<<en<<"\n";
    if(l==r)
    {
        if(f[en]-f[l]<=k) return 1;
        return 0;
    }
    else if(l<r)
    {
        int mid=(l+r)/2;
        if(f[en]-f[mid]<=k)
        {
            if(mid-1==0||f[en]-f[mid-1]>k) return mid;
            else return bs(l,mid-1,en);
        }
        if(f[en]-f[mid]>k)
        {
            return bs(mid+1,r,en);
        }
    }
    return -1;
}
int sub(int l, int r)
{
    if(l>r) return -1;
    int mx=0;
    int i;
    for(i=r;i<=l;i--)
    {
        cout<<i<<" ";
        mx=max(mx,i-bs(l,i,i));
    }
    return mx;
}

void sol()
{
    cin>>n>>k;
    int i;
    f[0]=0;
    h[0]=0;
    ll x;
    frs(i,1,n) {
        cin>>x;
        f[i]=x+f[i-1]; //consecutive sum
    }
    frs(i,1,n) cin>>h[i];
    // subarray form
    int prev;
    int mx=0;
    frs(i,1,n)
    {
        if(i==1) prev=i;
        else
        {
            if(h[i-1]%h[i]!=0)
            {
                mx=max(mx,sub(prev,i-1));
                prev=i;
            }
        }
    }
    mx=max(mx,sub(prev,i-1));
    cout<<mx<<"\n";
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

