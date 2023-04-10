//AC Solution

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



void solve()
{
    int n,i,k,ans;
    cin>>n;
    k=2;
    cout<<2*n<<" ";
    int pre,pos;
    frs(i,1,n)
    {
        if(i==1)
        {
            pre=1;
            cout<<pre<<" ";
            }
        else if(i%2==1)
        {
            pre+=2;
            cout<<pre<<" ";
        }
        if(i==2)
        {
            pos=(2*n)-3;
            cout<<pos<<" ";        }
            else if(i%2==0)
            {
                pos-=2;
                cout<<pos<<" ";
            }

    }
    cout<<"\n";
    fr(i,n-1)
    {
        if(i==0)
        {
            pre=2;
            cout<<pre<<" ";
        }
        else if(i%2==0)
        {

        pre+=2;
        cout<<pre<<" ";}

        if(i==1)
        {
            pos=(2*n)-2;
            cout<<pos<<" ";
        }
        else if(i%2==1)
        {
                            pos-=2;
                cout<<pos<<" ";
        }
    }
    cout<<(2*n)-1<<"\n";

//    cout<<ans<<"\n";
    return;
}


int main()
{
    int T,i,j;
    cin>>T;
    while(T--)
//    for(i=1;i<=T;i++)
    {
    solve();

    }
    return 0;
}



