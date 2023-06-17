#include<iostream>
using namespace std;

#define siz 200005
#define mini -1000000009
void sol()
{
    int n;
    int ar[siz];
    cin>>n;
    int i;
    for(i=0;i<n;i++) cin>>ar[i];

    int mxsum=mini;
    int currsum = 0;
    for(i=0;i<n;i++)
    {
        currsum+= ar[i];
        mxsum=max(mxsum,currsum);
        if(currsum<0) currsum = 0;
    }

    cout<<mxsum<<"\n";

    return;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        sol();
    }
}
