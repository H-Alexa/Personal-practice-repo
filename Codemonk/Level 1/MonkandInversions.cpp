#include<bits/stdc++.h>
using namespace std;
int ar[22][22];

int check(int i, int j, int n)
{
    int cn=0;
    int val=ar[i][j];
    for(int p=i;p<n;p++)
    {
        for(int q=j;q<n;q++)
        {
            if(p==i&&q==j) continue;
            if(ar[p][q]<val) cn++;
        }
    }
    return cn;
}


void sol()
{
    int n,cn=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cin>>ar[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cn+=check(i,j,n);
        }
    }
    cout<<cn<<"\n";
    return;
}
int main()
{
    int T,n,i;
    cin>>T;
    while(T--)
    {
        sol();

    }
    return 0;
}
