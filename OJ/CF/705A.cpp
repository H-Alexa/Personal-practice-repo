#include<bits/stdc++.h>
using namespace std;
char h[] = "I hate";
char l[] = "I love";
char it[] = " it\n";
char ad[] = " that ";
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        if(i%2==0)
            cout<<h;
        else cout<<l;
        if(i==n-1) cout<<it;
        else cout<<ad;
    }
    return 0;
}
