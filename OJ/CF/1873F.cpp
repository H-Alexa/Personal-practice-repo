//ACCEPTED SOLUTION

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
ll ar[siz];
ll a[siz],h[siz],l[siz],r[siz];
int bs(int lo, int hi, int val)
{
    if(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(ar[mid]==val) return mid;
        else if(ar[mid]>val)
        {
            if(ar[mid-1]<val) return mid;
            else if(mid==lo) return lo-1;
            else return bs(lo,mid-1,val);
        }
        else{
            
            if(ar[mid+1]>=val) return mid+1; 
            return bs(mid+1,hi,val);
        }
    }
    return -1;
}
void sol()
{
    int n,k;
    cin>>n>>k;
    int i,j;
    ll mx=0;
    ar[0]=0;
    frs(i,1,n) {
        cin>>a[i];
        ar[i]=mx+a[i];
        mx=ar[i];
    }
    mx=0;
    int pt=0;
    frs(i,1,n)
    {
        cin>>h[i];
        if(i==1){
            l[pt]=i;
        }
        else{
            if(h[i-1]%h[i]!=0)
            {
                r[pt++]=i-1;
                l[pt]=i;
            }
        }
    }
    r[pt++]=n;
    int ans=0;
    for(i=0;i<pt;i++)
    {
        for(j=r[i];j>l[i];j--)
        {
            //cout<<j<<" "<<l[i]<<"___lim\t";
            int idx=bs(l[i],j,ar[j]-k);
            if(idx>=0) ans=max(ans,j-idx);
            //cout<<idx<<"\n";
        }
        if(a[l[i]]<=k) ans=max(ans,1);
            //cout<<ans<<"-\n";

    }
    cout<<ans<<"\n";
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--) sol();
    return 0;
}

