//AC solution

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
int ar[siz];
void sol()
{
    int n;
    cin>>n;
    int pt=1;
    ar[0]=n;
    int mul=1;
    int m=n;
    while(n>0)
    {
        if(n>>1==0)
        {
            while(mul>1)
            {
                ar[pt++]=mul/2;
                mul/=2;
            }
            break;
        }
        else if(n%2==1)
        {
            ar[pt++]=m-mul;
            m-=mul;
        }
        n=n>>1;
        mul*=2;
        //cout<<n<<" ";
    }
    //ne;
    cout<<pt<<"\n";
    int i;
    fr(i,pt) cout<<ar[i]<<" ";
    ne;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--) sol();
    return 0;
}

