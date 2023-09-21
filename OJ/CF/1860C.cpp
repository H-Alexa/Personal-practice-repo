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
#define siz 300009
int ar[siz];
bool fl[siz];
void sol()
{
    int n;
    cin>>n;
    int i;
    int mn=siz;
    fr(i,n){
        cin>>ar[i];
        if(ar[i]<mn)
        {
            mn=ar[i];
            fl[i]=true;
            // cout<<ar[i]<<" ";
        }
        else fl[i]=false;
    }
    // cout<<"\n";
    int cn=0;
    int mx=siz;
    int mni=siz;
    bool ok=false;
    fr(i,n)
    {
        if(fl[i])
        {
            ok=true;
            mn=ar[i];
            mx=siz;
        }
        else{
            // cout<<ar[i]<<" "<<mx<<"\n";
            if(ar[i]<mx&&ok)
            {
                mx=ar[i];
                if(ar[i]<mni)
                    cn++;
            }
            mni=min(ar[i],mni);
        }
    }
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

