#include<bits/stdc++.h>
using namespace std;
char s[100];

void sol()
{

    cin>>s;
    int ans=0;
    int i,n;
    n=strlen(s);
    for(i=1;i<n;i++)
    {
        if(s[i-1]!=s[i]) ans++;
    }
    if(ans>0) cout<<n-1<<"\n";
    else cout<<"-1\n";
    return;
}
int main()
{

    int t;
    cin>>t;
    int i=1;
    while(t--)
    {
//    cout<<i<<"\n";
    sol();
//    i++;
    }
    return 0;
}
