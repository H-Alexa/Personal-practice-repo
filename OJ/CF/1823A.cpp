#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[109];
void pre()
{
    ar[0]=0;
    ar[1]=0;
    for(ll i=2;i<102;i+=2)
    {
        ar[i]=(i/2)*(i-1);
    }
    for(ll i = 3;i<100;i+=2)
    {
        ar[i]=((i-1)/2)*i;
    }
    return;
}

void sol()
{
    ll m,n;
    cin>>m>>n;
    ll div = m/2;
    ll i;
    for(i=0;i<=div;i++)
    {
        if(ar[m-i]+ar[i]==n)
        {
            cout<<"YES\n";
            for(int j = 0;j<m-i;j++) cout<<"1 ";
            for(int j = 0;j<i;j++) cout<<"-1 ";
            cout<<"\n";
            return;
        }
    }
//    if(ar[m-1]==n)
//    {
//        cout<<"YES\n";
//        for(int i = 0;i<m-1;i++) cout<<"1 ";
//        cout<<"-1\n";
//    }
//    else if(ar[m-2]==n-1)
//    {
//        cout<<"YES\n";
//        for(int i = 0;i<m-2;i++) cout<<"1 ";
//        cout<<"-1 -1\n";
//    }
//    else if(ar[m]==n)
//    {
//        cout<<"YES\n";
//        for(int i = 0;i<m;i++) cout<<"1 ";
//        cout<<"\n";
//    }
//    else if(m%2==0&&ar[m/2]==n/2)
//    {
//        cout<<"YES\n";
//        for(int i = 0;i<m/2;i++) cout<<"1 ";
//        for(int i = 0;i<m/2;i++) cout<<"-1 ";
//        cout<<"\n";
//    }
//    else{

    cout<<"NO\n";

//    }
    return;

}
int main()
{
    pre();
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}
