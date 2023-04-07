//AC Solution
//Problem: https://lightoj.com/problem/discovering-permutations
//


#include<bits/stdc++.h>
using namespace std;

#define fr(i,n) for(i=0;i<n;i++)
#define frs(i,a,n) for(i=a;i<n;i++)
#define cas(t) cout<<"Case "<<t<<":\n";

bool used[30];
int num[30];
void perm(int att, int n, int *k)
{
    if(*k==0) return;
    if(att==n)
    {
        for(int i = 0;i < n; i++)
        {
            cout<<char(num[i]+'A');
        }
        cout<<"\n";
//        cout<<*k<<"\n";
//        int c;
//        cin>>c;
        (*k)--;
        return;
    }
    for(int i = 0; i<n;i++)
    {
        if(!used[i])
        {
            used[i]=true;
            num[att]=i;
            perm(att+1,n,k);
            used[i]=false;
        }
    }

}

int main()
{
    int T,i,n,k;
    cin>>T;
    fr(i,T)
    {
        memset(used, false, sizeof(used));
        cin>>n>>k;
        cas(i+1);
        perm(0,n,&k);
    }
}
