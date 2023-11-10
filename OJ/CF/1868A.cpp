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
#define siz 200009

void sol(){
    int n,m;
    cin>>n>>m;
    if(m==1) {
        cout<<"0\n";
        while(n--) cout<<"0\n";
    }
    else if(m==2||n==1) {
        cout<<"2\n";
        if(n==1) {
            for(int i=0;i<m;i++) cout<<i<<" ";
            ne;
        }
        else{
            while(n--) cout<<"0 1\n";
        }
    }
    else {
        if(n<m) {
            cout<<n+1<<"\n";
            int st=1;
            while(n--)
            {
                int j=st;
                for(int i=0;i<m;i++)
                {
                    cout<<j++<<" ";
                    j=j%m;
                }
                st++;
                ne;
            }
            ne;
        
        }
        else {
            cout<<m<<"\n";
            int st=1;
            for(int i=0;i<m-1;i++)
            {
                int j=st;
                for(int i=0;i<m;i++)
                {
                    cout<<j++<<" ";
                    j=j%m;
                }
                ne;
                st++;
            }
            n=n-m+1;
            while(n--)
            {
                for(int i=0;i<m;i++)
                cout<<(i+1)%m<<" ";
                ne;
            }
        }
    }
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--) sol();
    return 0;
}

