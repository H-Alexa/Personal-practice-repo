//AC solution



#include<bits/stdc++.h>
using namespace std;

    char s[10];
int main()
{
    cin>>s;
    int b1=-1,b2=-1,r1=-1,r2=-1,k=-1;
    for(int i=0;i<8;i++)
    {
        if(s[i]=='B')
        {
            if(b1<0) b1=i;
            else b2=i;

        }
                if(s[i]=='R')
        {
            if(r1<0) r1=i;
            else r2=i;
        }
        if(s[i]=='K')
        {
            k=i;
        }
    }
    bool ok=true;
    if(k<r1||k>r2) ok=false;
    if((b1%2)==(b2%2)) ok=false;
    if(!ok) cout<<"No\n";
    else cout<<"Yes\n";
    return 0;
}
