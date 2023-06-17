#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define n 100005
ll ar[n];
int main()
{
    int m;
    cin>>m;
    int i,j;
    for(i=0;i<m;i++) cin>>ar[i];
    int l=0,r=0;
    for(i=1;i<m;i++)
    {
        if(ar[i-1]+ar[i]>=ar[i])
        {
            r=i;
            ar[i]+=ar[i-1];
            cout<<ar[i]<<" kj\n";
        }
        else if(ar[i-1]+ar[i]>=ar[i-1])
            {
                    ar[i-1]+=ar[i];
                    r=i;
                    for(j=l;j<r;j++)
                    {
                        ar[j]=ar[i-1];
                    }
                    l=i;
            }
            else
                l=i;
        }


    for(j=l;j<r;j++) ar[j]=ar[r];
    for(i=0;i<m;i++) cout<<ar[i]<<" ";
    cout<<"\n";
    return 0;
}
