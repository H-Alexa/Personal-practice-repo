#include<iostream>
using namespace std;
char val[30];

void in()
{
    int i;
    for(i=1;i<=26;i++)
    {
        val[i]='A'+i-1;
    }
    return;
}


    
int main()
{
    int n;
    cin>>n;
        in();
        while(n>1)
        {
            if(n%26==0) cout<<val[26];
            else    cout<<val[n%26];
            cout<<" "<<n%26<<" ";
            n/=26;
        }
}