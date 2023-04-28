//AC solution

#include<bits/stdc++.h>
using namespace std;

#define siz 100
#define fr(i,n) for(i=0;i<n;i++)
int a[100],b[100];
int main()
{
    int T;
    cin>>T;
    int n,t,i;
    while(T--)
    {
        cin>>n>>t;
        fr(i,n) cin>>a[i];
        fr(i,n) cin>>b[i];
        int mx = -1;
        int pos=-1;
        fr(i,n)
        {
            if(a[i]>t) {
            t--;
            continue;
            }
            if(b[i]>mx)
            {
                pos=i+1;
                mx=b[i];
            }
            t--;
        }
        cout<<pos<<"\n";
    }


}
