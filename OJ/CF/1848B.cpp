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
int ar[siz],ls[siz],mx1[siz],mx2[siz];
void sol()
{
    int k,n;
    cin>>n>>k;
    int pos, mn;
    mn=200009;
    memset(ls,-1,(k+1)*sizeof(int));
    memset(mx1,-1,(k+1)*sizeof(int));
    memset(mx2,-1,(k+1)*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ls[ar[i]]==-1)
        {
            ls[ar[i]]=i;
            mx1[ar[i]]=i;
            mx2[ar[i]]=0;

        }
        else{
            int p = i-ls[ar[i]]-1;
            ls[ar[i]]=i;
            if(p>=mx1[ar[i]])
            {
                mx2[ar[i]]=mx1[ar[i]];
                mx1[ar[i]]=p;
            }
            else if(p>mx2[ar[i]])
            {
                mx2[ar[i]]=p;
            }
        }
    }
    for(int i=0;i<=k;i++)
    {
        if(ls[i]>=0)
        {
        if(ls[i]!=n-1)
        {
            int p = n-1-ls[i];
            if(p>=mx1[i])
            {
                mx2[i]=mx1[i];
                mx1[i]=p;
            }
            else if(p>mx2[i])
            {
                mx2[i]=p;
            }
        }
        int mm = max(mx1[i]/2,mx2[i]);
        if(mn>mm)
        {
            mn=mm;
            pos=k;
        }
        }
    }
    cout<<mn<<"\n";
    return;

}
int main()
{
    int t;
    cin>>t;
    while(t--) sol();
    return 0;
}

