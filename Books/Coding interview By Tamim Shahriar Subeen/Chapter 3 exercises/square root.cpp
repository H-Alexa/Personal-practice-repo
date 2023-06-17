#include<bits/stdc++.h>
using namespace std;

#define intrvl .000000001
#define ini .000001
double bin(double lo, double hi, int n)
{
    //cout<<"init\n";
    double mid = (lo+hi)/2.0;
    if((hi-lo)>=intrvl)
    {
    //cout<<mid<<"\n";
    //cout<<abs((mid*mid)-n)<<"__\n";
    if(abs((mid*mid)-n)<=intrvl) return floor(mid);
    else if(mid*mid>n) return floor(bin(lo, mid-intrvl,n));
    else return floor(bin((mid+intrvl, hi, n)));
    }
   // else return mid;
}

double squarert(int n)
{
    double ans;
    if(n<0) return -1;
    if(n==0) return 0;
    ans = bin(1.0,n*1.0,n);
    return ans;
}

void sol()
{
    int n;
    cin>>n;
    cout<<<<squarert(n)<<"\n";
    return;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
        sol();
    return 0;
}
