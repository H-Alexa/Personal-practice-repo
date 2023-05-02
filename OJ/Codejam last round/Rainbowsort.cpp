#include<bits/stdc++.h>
using namespace std;
#define siz 100009
bool ar[siz];
int r[siz];
void sol()
{
    int n;
    map <int,bool> mp;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>r[i];
    }
    bool ans = true;
    for(i=0;i<n;i++)
    {
        if(mp.find(r[i])!=mp.end())
        {
            ans=false;
            break;
        }
        else{
            if(i==n-1)
            {
                mp[r[i]]=true;
            }
            else{
                if(r[i]!=r[i+1])
                {
                    mp[r[i]]=true;
                }
                else{
                r[i]=-1;}
            }
        }
    }
    if(!ans) cout<<"IMPOSSIBLE\n";
    else{
        for(i=0;i<n;i++)
        {
            if(r[i]>=0) cout<<r[i]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
        int T,i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cout<<"Case #"<<i<<": ";
        sol();
    }
    return 0;

}

