//Another approach. Depth till k rather than n

#include<bits/stdc++.h>
using namespace std;

int number[20];
int n,k;

void combination(int att, int lastnum)
{
    if(att==k)
    {
        for(int i=0;i<k;i++)
            cout<<number[i]<<" ";
        cout<<"\n";
        return;
    }
    // while num i is at position "att", numbers left n-i
    //blank space left k-att-1 [0 based indexing]
    //So k-att-1<=n-i
    //i<=n-k+att+1
    for(int i=lastnum+1;i<=n-k+att+1;i++)
    {
        number[att]=i;
        combination(att+1,i);
    }
}

int main()
{
    cin>>n>>k;
    combination(0,0);
    return 0;
}
