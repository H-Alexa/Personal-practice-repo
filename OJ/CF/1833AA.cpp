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
//a b c d e f g
//0 1 2 3 4 5 6
bool ch[100][100];
void sol()
{
    int n;
    cin>>n;
    char c[100];
    cin>>c;
    int i;
    int cn=0;
    memset(ch,false,sizeof(ch));
    for(i=0;i<n-1;i++)
    {
        if(!ch[c[i]-'a'][c[i+1]-'a'])
        {
            cn++;
            ch[c[i]-'a'][c[i+1]-'a']=true;
        }
    }
    cout<<cn<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    sol();
    return 0;
}

