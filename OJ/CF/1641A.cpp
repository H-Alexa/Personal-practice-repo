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
int ar[siz];
void sol()
{
    int n,x;
    cin>>n>>x;
    int i;
    fr(i,n) cin>>ar[i];
    sort(ar,ar+n);
    int cn=0;
    queue<int> q;
    ll ls=0;
        for(i=0;i<n;i++)
        {
            if(q.empty())
            {
                q.push(ar[i]);
                continue;
            }
            ls=q.front();
            ls*=x;
            if(ar[i]>ls)
            {
                    cn++;
                    q.pop();
                    i--;
            }
            else if(ar[i]==ls)
            {
                q.pop();
            }
            else {
                q.push(ar[i]);
            }
            // cout<<"___ "<<ls<<" "<<cn<<"\n";
        }
        cn+=q.size();
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

