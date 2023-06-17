#include<bits/stdc++.h>
using namespace std;

int ar[] = {4,7,44,47,77,74,444,447,474,477,744,747,777,774};
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=0;i<14;i++)
    {
        if(n%ar[i]==0) {
        cout<<"YES\n";
        return 0;}
    }
    cout<<"NO\n";
    return 0;
}

