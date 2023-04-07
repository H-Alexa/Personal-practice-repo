//It's given in book. I just tried to understand the logic and then from my understanding, wrote the code. I used 0 based indexing

#include<bits/stdc++.h>
using namespace std;
int n, k;
int number[20];

void combination(int presentNum, int left)
{
    if(left>n-presentNum+1)
        return;
    if(presentNum==n+1)
    {
        for(int i=0;i<k;i++)
            cout<<number[i]<<" ";
        cout<<"\n";
    }

    if(left)
    {
        number[k-left]=presentNum;
        combination(presentNum+1,left-1);
    }
    combination(presentNum+1,left);
}


int main()
{
    cin>>n>>k;
    combination(1,k);

    return 0;
}
