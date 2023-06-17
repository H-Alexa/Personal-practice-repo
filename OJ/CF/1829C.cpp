//AC solution
//Problem link https://codeforces.com/contest/1829/problem/C

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
//int ar[siz];
int fr[siz],sec[siz],both[siz];
int sol()
{
    int n;
    cin>>n;
    int x,i;
    char ar[10];
    int fsp=0,ssp=0,bp=0;
    fr(i,n)
    {
        cin>>x;
        cin>>ar;
        if(ar[0]=='1'&&ar[1]=='1') both[bp++]=x;
        else if(ar[0]=='1') fr[fsp++]=x;
        else if(ar[1]=='1') sec[ssp++]=x;
    }
    if(bp==0)
    {
        if(fsp==0) return -1;
        if(ssp==0) return -1;
        sort(fr,fr+fsp);
        sort(sec,sec+ssp);
        return fr[0]+sec[0];
    }
    else
        {
        sort(both,both+bp);
        if(fsp==0) return both[0];
        if(ssp==0) return both[0];
                sort(fr,fr+fsp);
        sort(sec,sec+ssp);
        return min(both[0],fr[0]+sec[0]);
        }






}



int main()
{
    int t;
    cin>>t;
    while(t--)
    cout<<sol()<<"\n";
    return 0;
}
 
