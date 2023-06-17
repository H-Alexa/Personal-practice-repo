#include<bits/stdc++.h>
using namespace std;
typedef double db;
#define fr(i,n) for(i=0;i<n;i++)
#define dif 0.000000001
int main()
{
    int x,y;
    cin>>x>>y;
    if(x<0&&y<0)
    {
    x=-x;
    y=-y;
                if(x%y==0) cout<<x/y<<"\n";
        else cout<<(x/y)+1<<"\n";
    }
    else if(x>=0&&y>0)
    {
        if(x%y==0) cout<<x/y<<"\n";
        else cout<<(x/y)+1<<"\n";
    }
    else{
        cout<<x/y<<"\n";
    }
    return 0;
}
