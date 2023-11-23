#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ar[200];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        ar[x]=i;
    }
    for(int i=1;i<=n;i++) cout<<ar[i]<<" ";
    cout<<"\n";
}