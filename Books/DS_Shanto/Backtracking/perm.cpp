#include<bits/stdc++.h>
using namespace std;

bool used[100];
int num[100];

void perm(int att, int n)
{
    if(att==n+1)
    {
        for(int i=0;i<n;i++)
        {
            cout<<num[i]<<" ";
        }
        cout<<"\n";
    }
    for(int i=1;i<=n;i++)
    {
        if(!used[i])
        {
            num[att-1]=i;
            used[i]=true;
            perm(att+1,n);
            used[i]=false;
        }
    }

}


int main()
{
    int n;
    memset(used, false, sizeof(used));
    cin>>n;
    perm(1,n);
}
