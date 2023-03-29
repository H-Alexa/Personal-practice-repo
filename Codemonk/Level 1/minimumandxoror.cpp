#include<bits/stdc++.h>
using namespace std;

#define siz 100009
#define fr(i,n) for(i=0;i<n;i++)
#define frs(i,a,n) for(i=a;i<n;i++)

int ar[siz];

void sol()
{
    int n,i,j,ans,mini;
    mini=1000000009;
    cin>>n;
    fr(i,n) cin>>ar[i];
    sort(ar,ar+n);
    fr(i,n-1){
        if(ar[i]==ar[i+1])
        {
            cout<<"0\n";
            return;
        }
        ans=ar[i]^ar[i+1];
            mini=min(ans,mini);
    }

    cout<<mini<<"\n";
    return;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        sol();
    }
    return 0;
}
