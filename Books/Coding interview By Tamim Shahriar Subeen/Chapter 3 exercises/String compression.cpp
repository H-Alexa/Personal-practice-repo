#include<bits/stdc++.h>
using namespace std;
string tostr(int n)
{
    string s;
    if(n<10) s+=(n+'0');
    else
    {
        while(n>0)
        {
            int x=n%10;
            n/=10;
            s+=(x+'0');
        }
        int ss = s.size();
        string m;
        for(int i=ss-1;i>=0;i--)
        {
            m+=s[i];

        }
        s=m;
    }
    return s;
}
string comp(string a)
{
    int n=a.size();
    int i;
    string s;
    int cn=0;
    bool st=false;
    for(i=0;i<n;i++)
    {
        if(!st)
        {
            s+=a[i];
            cn=1;
            st=true;
            }
        else {
            if(a[i]==a[i-1])
            {
                cn++;
            }
            else if(a[i]!=a[i-1])
            {
                s+=tostr(cn);
                cn=1;
                s+=a[i];
            }
        }
    }
    s+=tostr(cn);
    return s;
}

void sol()
{
    string s;
    cin>>s;
    cout<<comp(s)<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        sol();
}
