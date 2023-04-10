#include<bits/stdc++.h>
using namespace std;
int ar[105];
int main()
{
    int n,i;

    cin>>n;
    int maxx,pos,cnt;
    maxx=0;
    pos=-1;
    cnt=0;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==maxx)
        {
            cnt++;
            if(cnt==3) pos=i;
        }
        else if(maxx<ar[i])
        {
            cnt=1;
            maxx=ar[i];
            pos=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i!=pos) cout<<ar[i]<<" ";
    }
    cout<<"\n";

    return 0;

}

