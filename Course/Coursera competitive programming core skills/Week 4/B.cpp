#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mx=0,mn=1000000009;
    int mnpos=1,mxpos=1;
    int n,i,x;
    i=1;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x<mn)
        {
            mn=x;
            mnpos=i;
        }
        else if(x>mx)
        {
            mx=x;
            mxpos=i;
        }
        i++;
        cout<<min(mnpos,mxpos)<<" "<<max(mnpos,mxpos)<<"\n";
    }
    return 0;
}
