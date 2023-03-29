#include<iostream>
using namespace std;

#define siz 100009
int ar[siz];

void sol()
{
    int N,K;
    cin>>N>>K;
    for(int i=0;i<N;i++) cin>>ar[i];
    int ind=N-(K%N);
    for(int i=ind;i<N;i++) cout<<ar[i]<<" ";
    for(int i=0;i<ind;i++) cout<<ar[i]<<" ";
    cout<<"\n";
    return;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        sol();
    }

    return 0;
}
