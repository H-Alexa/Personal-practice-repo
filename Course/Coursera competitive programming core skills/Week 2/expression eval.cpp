#include<bits/stdc++.h>
using namespace std;
#define ll long long
char s[50009];
ll nm(int st, int en)
{
    ll num=0;
    int i=en;
    ll mul=1;
    while(i>=st)
    {
        num+=(s[i]-'0')*mul;
        mul*=10;
        i--;
    }
    return num;
}
int main()
{
    cin>>s;
    int i;
    ll len = strlen(s);
    ll cn=0,num=0;
    int pn=0;
//    cout<<"ok\n";
    char las = '+';
    for(i=0;i<len;i++)
    {
        if(s[i]=='+'||s[i]=='-')
        {
            if(las=='+')
            {
                cn+=nm(pn,i-1);
            }
            else{
                cn-=nm(pn,i-1);
            }
            pn=i+1;
            las=s[i];
        }
    }
                if(las=='+')
            {
                cn+=nm(pn,len-1);
            }
            else{
                cn-=nm(pn,len-1);
            }
    cout<<cn<<"\n";
    return 0;
}
