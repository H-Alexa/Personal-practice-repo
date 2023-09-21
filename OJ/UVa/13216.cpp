#include<bits/stdc++.h>
using namespace std;

int ar[] = {7,1,5,9,3,7,1,5,9,3};

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int l=s.size();
        if(l==1&&s[0]=='0') cout<<"1\n";
        else if(l==1&&s[0]=='1') cout<<"66\n";
        else cout<<ar[s[l-1]-'0']<<"6\n";
    }
}