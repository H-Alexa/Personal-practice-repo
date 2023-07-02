#include<bits/stdc++.h>
using namespace std;
#define sz 200009
int ar[sz];
void sol()
{
    int n,i,pn;
    int x;
    bool up=false;
    int prev;
    int ls;
    int las;


    cin>>n;
 
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i==0) {
        prev=ar[0];
        las=ar[0];
        cout<<"1";
        }
        else{
        if(up)
        {
        if(ar[i]<=prev&&ar[i]>=ls)
        {
            cout<<"1";
            ls=ar[i];
            }
            else cout<<"0";
        }
        else
        {
            if(ar[i]>=las)
            {
                cout<<"1";
                las=ar[i];
            }
            else if(ar[i]<=prev)
            {
                cout<<"1";
                ls=ar[i];
                up=true;
            }
            else{
                cout<<"0";
            }
        }
        }
    }
    cout<<"\n";
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
