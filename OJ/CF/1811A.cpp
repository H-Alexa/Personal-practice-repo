#include<bits/stdc++.h>
using namespace std;
#define siz 200009
char ar[siz];
void sol()
{
    int n,k;
    cin>>n>>k;
    cin>>ar;
    int i;
    char tem,li;
    tem=k+'0';
    bool on=false;
    for(i=0;i<n;i++)
    {
        if(on)
        {
            li=ar[i];
            ar[i]=tem;
            tem=li;
        }
        else if(ar[i]-'0'<k)
        {
            on=true;
            tem=ar[i];
            ar[i]=k+'0';
        }

    }
    ar[n]=tem;
    ar[n+1]='\0';
    cout<<ar<<"\n";
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
