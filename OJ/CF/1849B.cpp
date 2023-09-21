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
#define siz 300009
//int ar[siz];

void print(vector<pair<int,int>> v)
{
    cout<<"printring: ";
    int n;
    n=v.size();
    int i;
    fr(i,n) cout<<v[i].first<<","<<v[i].second<<" ";
    cout<<"\n";

}
void sol()
{
    vector<pair<int,int>> v;
    int n,k;
    cin>>n>>k;
    int i,j;
    fr(i,n) {
        cin>>j;
        v.push_back({j,i});
    }
    sort(v.begin(), v.end(),greater<pair<int, int> >());
    //print(v);
    vector<pair<int,int>> nv;
    vector<int> ans;
    int vst=0,nvst=-1;
    int x=0;
    while(x<n)
    {
        int num=v[0].first;
        int id = v[0].second;
        if(nvst>=0)
        {
            if(num==nv[0].first&&id>nv[0].second)
            {
                num=nv[0].first;
                id = nv[0].second;
                nv.erase(nv.begin());
                sort(nv.begin(), nv.end(),greater<pair<int, int> >());
                cout<<"nv\n";
                print(nv);
            }
            else if(num<nv[0].first)
            {
                num=nv[0].first;
                id = nv[0].second;
                nv.erase(nv.begin());
                sort(nv.begin(), nv.end(),greater<pair<int, int> >());
                cout<<"nv\n";
                print(nv);
            }
            else {
                v.erase(v.begin());
                cout<<"v\n";
                print(v);
            }
        }
        else {
            v.erase(v.begin());
            //cout<<num<<" "<<id<<"\n";
            cout<<"v\n";
            print(v);
        }
        num-=k;
        if(num<=0) {
            ans.push_back(id+1);
        cout<<num<<" "<<id<<"\n";
            
            x++;
        }
        else{
            if(nvst<0)
            {
                nvst=0;
                nv.push_back({num,id});
            }
            else{
            if(num==nv[0].first&&id<nv[0].second)
            {
                pair<int,int> p = {num,id};
                nv.insert(nv.begin(),p);
            }
            else if(num>nv[0].first)
            {
                pair<int,int> p = {num,id};
                nv.insert(nv.begin(),p);  
            }
            else nv.push_back({num,id});
        }
        }
        print(nv);
    }
    for(i=0;i<x;i++) cout<<ans[i]<<" ";
    cout<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    sol();
    return 0;
}

