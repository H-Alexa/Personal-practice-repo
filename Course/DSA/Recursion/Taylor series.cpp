#include<iostream>
using namespace std;

/*

1+x/1+x/2!+x/3!+x/4!+.......
e(x,4)= 1+x/1+x^2/2!+x^3/3!+x/4!

*/

double e(int x, int n)
{
    static double p,f;
    p=f=1.0;
    if(n==0) {
        return 1.0;
    }
    else{
        double r = e(x,n-1);
        p=p*x;
        f=f*n;
        cout<<p<<"/"<<f<<"\n";
        return r+(p/f);
    }

}
int main()
{

    cout<<e(2,5);
    return 0;
}