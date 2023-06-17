//AC solution
//Problem link https://codeforces.com/contest/1829/problem/F



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
#define siz 209
bool ar[siz][siz];
int cn[siz];
void sol()
{
    memset(ar,false,sizeof(ar));
    int i,j,u,v,n,m;
    cin>>n>>m;
    while(m--)
    {
        cin>>u>>v;
        ar[u][v]=true;
        ar[v][u]=true;
    }
    int lf=0;
    frs(i,1,n+1)
    {
        cn[i]=0;
        frs(j,1,n+1)
        {
            if(ar[i][j]) cn[i]++;
        }
            if(cn[i]==1)  lf++;
//        cout<<cn[i]<<" ";
    }
    int xx = lf/(n-lf-1);
    cout<<n-lf-1<<" "<<xx<<"\n";
    return;
//    cout<<"\n";
//    frs(i,1,n+1)
//    {
//        if(cn[i]==1) {
//        lf++;
////        continue;
//        }
////        if(x<0)
//        {
//            x=cn[i];
//        }
//        else if(cn[i]==x)
//        {
//            xp++;
//        }
//        else {
//            if(y<0)
//            {
//                y=cn[i];
//            }
//            else if(cn[i]==y)
//            {
//                yp++;
//            }
//        }

    }
//    cout<<x<<" "<<y<<" "<<xp<<" "<<yp<<"\n";
//    if(xp==0)
//        cout<<x<<" "<<y-1<<"\n";
//    else cout<<y<<" "<<x-1<<"\n";
//    return;

//}


int main()
{
    int t;
    cin>>t;
    while(t--)
        sol();
    return 0;
}
 
