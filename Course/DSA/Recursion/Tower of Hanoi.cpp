#include<iostream>
using namespace std;
int tow(int n,char a, char b, char c)
{
    static int x=1;
    if(n==1)
    {
        cout<<"Take "<<x<<"from "<<a<<" to "<<c<<"\n";
        return 1;
    }
    int r=0;
    x=n-1;
    r=tow(n-1,a,c,b);
    x=n;
    r+=tow(1,a,b,c);
    x=n-1;
    r+=tow(n-1,b,a,c);
    return r;
}



int main()
{
    int n;
    cin>>n;
    cout<<tow(n,'A','B','C');
}