#include<bits/stdc++.h>
using namespace std;
bool bs(int* ar, int lo, int hi, int n)
{
    if(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(ar[mid]==n) return true;
        if(ar[mid]<n) return bs(ar,mid+1,hi,n);
        if(ar[mid]>n) return bs(ar,lo, mid-1,n);
    }
    return false;
}
bool isthere(int* ar, int n, int k)
{
    int i;
    sort(ar,ar+n);
    for(i=0;i<n;i++)
    {
        if(bs(ar,i,n-1,k+ar[i])) return true;
        if(bs(ar,i,n-1,k-ar[i])) return true;
    }
    return false;
}
void input(int* ar, int& n, int& k)
{
    int i=0;
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++) cin>>ar[i];
    return;
}
int main()
{
    int ar[20000];
    int n,k;
    input(ar,n,k);
    if(isthere(ar,n,k)) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
