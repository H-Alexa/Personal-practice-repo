#include<bits/stdc++.h>
using namespace std;
int ar[200];
int dif[200];


int main()
{
    int n;
    int t=100;
    int i;
    int ev=-1,od=-1;
    int evn,odn;
    evn=odn=0;

    cin>>n;
    for(i=0;i<n;i++) {
        cin>>ar[i];
        if(ar[i]%2==0)
        {
            if(evn==0) ev=i+1;
            evn++;
        }
        else{
            if(odn==0) od=i+1;
            odn++;
        }
    }
    if(odn==1) cout<<od<<"\n";
    else cout<<ev<<"\n";
    
    

    return 0;
}