#include<iostream>
using namespace std;

double e(int x, int n)
{
static double p = 1.0;
if(n==0) return 1.0;
/*
    1+x/1(1+x/2)
*/
return 1.0+(x/p++)*e(x,n-1);
}

int main()
{
     cout<<e(2,5);
     int x=2,n=5;
     double p=5.0;
     double ans=1.0;
     for(int i=0;i<n;i++)
     {
          ans=1.0+(x/p--)*ans;
     }
     cout<<ans<<"\n";
}