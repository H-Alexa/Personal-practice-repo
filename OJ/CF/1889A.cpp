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
#define siz 1009
char ar[siz];
void pre()
{
    char c='0';
    for(int i=0;i<1000;i++) ar[i]=c;
    ar[1000]='\0';
    return;
}
char in[200];
int seq[500];
void sol()
{
    int n,i,s,e;
    cin>>n;
    cin>>in;
    int no=0,nz=0;
    if(n%2==1) {
        cout<<"-1\n";
        return;
    }
    int op=0;
    for(i=400;i<400+n;i++) {ar[i]=in[i-400];
    if(ar[i]=='0') nz++;
    else no++;
    }
    if(no!=nz) {
        cout<<"-1\n";
        return;
    }
    s=400;
    e=400+n-1;
    int si,se;
    si=0;
    se=n-1;
    while(s<e&&op<=300)
    {
        if(ar[s]!=ar[e])
        {
            s++;
            e--;
            si++;
            se--;
        }
        else{
            if(ar[s]=='1')
            {
                seq[op++]=si;
                se++;
                s--;
                ar[s]='1';
                e--;
            }
            else{
                seq[op++]=se+1;
                se++;
                si++;
                e++;
                s++;
                ar[e]='0';
            }

        }
    }
    cout<<op<<"\n";
    for(i=0;i<op;i++) cout<<seq[i]<<" ";
    ne;
}

int main()
{
    pre();
    int t;
    cin>>t;
    while(t--) sol();
    return 0;
}

