#include<bits/stdc++.h>
using namespace std;
char s[10];
int main()
{
    int i,t;
    cin>>t;
    while(t--)
    {
        int cn=1;
        bool fl=false;
        cin>>s;
        int n=strlen(s);

        for(i=0;i<n;i++)
        {
        if(s[0]=='0')
        {
            cn=0;
            break;
        }
            if(s[i]=='?')
            {
                fl=true;
                if(i==0) cn*=9;
                else cn*=10;
            }
        }
        cout<<cn<<"\n";
    }
    return 0;
}
