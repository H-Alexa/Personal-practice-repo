#include<bits/stdc++.h>
using namespace std;
char ar[109];
void sol()
{
    cin>>ar;
    int i,n;
    n=strlen(ar);
    int cn=0;
    if((n==1) && (ar[0] == '^'))
    {
        cout<<"1\n";
        return;
    }
    if(ar[0]=='_') cn++;
    for(i=0;i<n-1;i++)
    {
        if(ar[i]=='_'&&ar[i+1]!='^') cn++;

    }
    if(ar[n-1]=='_') cn++;
    cout<<cn<<"\n";
    return;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    sol();
    return 0;

}
