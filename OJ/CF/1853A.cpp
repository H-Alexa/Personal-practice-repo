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
//int ar[siz];
void sol()
{
    ll prev, gap, mngap, nw;
    ll n;
    ll i;
    bool issrt = true;
    cin>>n;
    mngap=1000000009;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cin>>prev;
        }
        else{
            cin>>nw;
            gap=nw-prev;
            if(gap<0) issrt=false;
            mngap=min(gap,mngap);
            prev=nw;
        }
       
    }
         
        if(!issrt) {
            cout<<"0\n";
        }
        else cout<<(mngap/2)+1<<"\n";

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

