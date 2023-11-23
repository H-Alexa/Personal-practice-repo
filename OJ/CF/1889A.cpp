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
char in[200];
int seq[500];
void sol()
{
    int n,i,s,e;
    cin>>n;
    cin>>in;
    int no=0,nz=0;
    fr(i,n){
        if(in[i]=='0') nz++;
        else no++;
    }
    if(n%2==1||no!=nz) {
        cout<<"-1\n";
        return;
    }
    int op=0;
    int o=0;
    int z=0;
    s=0;
    e=n-1;
    while(s<e)
    {
        if(z>0&&o>0)
        {
            int m =min(z,o);
            o-=m;
            z-=m;
        }
        else if(z>0)
        {
            if(in[s]=='1') {
                z--;
                s++;
            }
            else{
                z++;
//                seq[op++]=e+o+z;
                seq[op++]=e+z;
                s++;
            }
        }
        else if(o>0)
        {
            if(in[e]=='0'){
                e--;
                o--;
            }
            else{
                seq[op++]=s;
                o++;
                e--;
            }
        }
        else if(in[s]!=in[e])
        {
            s++;
            e--;
        }
        else{
            if(in[s]=='0')
            {
                z++;
                seq[op++]=e+z;
                s++;
            }
            else{
                e--;
                o++;
                seq[op++]=s;
            }
        }
        if(op>300) break;

    }
    if(op>300) {
        cout<<"-1\n";
        return;
    }
    cout<<op<<"\n";
    fr(i,op) cout<<seq[i]<<" ";
    ne;
}

int main()
{
    int t;
    cin>>t;
    while(t--) sol();
    return 0;
}

