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
int both[1000],ini[100],las[100];
char revhash[1000][4];
char in[siz][4];
void init()
{
    memset(both,0,sizeof(both));
    memset(ini,0,sizeof(ini));
    memset(las,0,sizeof(las));
    return;
}
void calc(char a[4])
{
    ini[a[0]-'a']++;
    las[a[1]-'a']++;
    both[((a[0]-'a')*(1<<0))+((a[1]-'a')*(1<<1))]++;
    int i=((a[0]-'a')*(1<<0))+((a[1]-'a')*(1<<1));
    revhash[i][0] = a[0];
    revhash[i][1] = a[1];
    revhash[i][2] = '\0';
    return;
}
ll pairs(ll n)
{
    if(n<2) return 0;
    ll ans;
    if(n%2==0)
    {
        ans = n/2;
        for(int i = n-1;i>n-2;i--)
        {
            ans*=i;
        }
    }
    else{
        bool fl=true;
        ans=1;
        for(int i=n;i>n-2;i--)
        {
            if(i%2==0&&fl) {
            ans*=i/2;
            fl=false;
            }
            else ans*=i;

        }
    }
    return ans;
}
void sol()
{
    int n;
    cin>>n;
    init();
    int i;
    fr(i,n) {
        cin>>in[i];
        calc(in[i]);
    }
    ll cn=0;
    fr(i,700)
    {

        if(both[i])
        {
            int fs,ls;
//            ll tm=0;
            fs=ini[revhash[i][0]-'a'];
            ls=las[revhash[i][1]-'a'];
//            cout<<revhash[i][0]<<" "<<revhash[i][1]<<"\n";
            if(fs>both[i])
            {
//                tm+=fs-both[i]+1;
//                cout<<fs<<" fs\n";
                cn+=pairs(fs-both[i]+1);
                ini[revhash[i][0]-'a']=both[i];
            }
            if(ls>both[i])
            {
//                tm+=fs-both[i]+1;
//                cout<<ls<<" ls\n";
                cn+=pairs(ls-both[i]+1);
                las[revhash[i][1]-'a']=both[i];
            }
//            cn+=pairs(tm);
//        cout<<revhash[i]<<" "<<cn<<"\n";
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

