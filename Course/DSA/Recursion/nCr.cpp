#include<iostream>
using namespace std;

int rec(int n, int r)
{
    if(n==0) return 1;
    if(r==0||r==n) return 1;
    return rec(n-1,r-1)+rec(n-1,r);
}
int main()
{
    cout<<rec(4,2);
    return 0;
}