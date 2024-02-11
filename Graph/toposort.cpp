#include<bits/stdc++.h>
using namespace std;
int ord[10009];
bool en[10009];
bool vis[10009];
bool bfs(int val, int col[], vector<set<int>>& in, int n, int i)
{

    int nx = (val+1)%2;
    if(col[i]==nx) return true;
    col[i]=val;
    for(auto x: in[i])
    {
        if(col[x]==val) return true;
        col[x]=nx;
    }
    bool fl=false;
    for(auto x: in[i])
    {
        fl=fl||bfs(val,col,in,n,x);
    }
    return fl;
}

// void tops(vector<set<int>>& in, int n)
// {
//     int id=n-1;
//     memset(en,false, sizeof(en));
//     memset(vis,false, sizeof(vis));
//     for(int i=0;i<n;i++)
//     {
//         if(!vis[i])
//         {
//             for(auto x: in[i])
//             {
//                 if(!en)
//             }
//         }
//     }
// }

int main()
{
    int n;
    cin>>n;
    //memset(ord,-1,sizeof(ord));
    vector<set<int> > in(n+1);
    set<int> v;
    int m;
    int x,y;
    cin>>m;
    bool fl=false;
    while(m--)
    {
        cin>>x>>y;
        if(x==y) fl=true;
        in[x].insert(y);
    }
    fl=hasCycle(in,n);
    if(fl) cout<<"Sandro fails.\n";
    // else{
    //     tops(in,n);
    // }
    return 0;
}