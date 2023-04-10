#include<bits/stdc++.h>
using namespace std;
char c[10000009];

int check()
{
    int len=strlen(c);
    int i;
    for(i=0;i<len;i++) if(c[i]!='9') return len;
    return len+1;
}
int main()
{
    int n,i;
    cin>>c;
    cout<<check()<<"\n";
    return 0;

}


