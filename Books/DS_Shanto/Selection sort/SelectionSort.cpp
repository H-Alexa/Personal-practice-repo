##Problem: https://www.hackerearth.com/practice/algorithms/sorting/selection-sort/tutorial/


#include<bits/stdc++.h>
using namespace std;
void sol(int *ar, int n)
{
    int x;
    cin>>x;
    int i,j,tmp,pos;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<x;i++)
    {
        int mini=ar[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(ar[j]<mini)
                {
                    mini=ar[j];
                    pos=j;
                }
        }
        ar[pos]=ar[i];
        ar[i]=mini;
//        cout<<ar[i]<<" ";
    }
    for(i=0;i<n;i++) cout<<ar[i]<<" ";
    cout<<"\n";
    return;

}
int main()
{
    int ar[109];
    int i,j,n,x;
    cin>>n;
    sol(ar,n);
}
