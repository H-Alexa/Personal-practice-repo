#include<bits/stdc++.h>
using namespace std;
#define big 1000000009
void sol()
{
    int mino,mine;
    int n;
    cin>>n;
    int x;

    mino=1000000009;
    mine=1000000009;

    while(n--)
    {
        cin>>x;
        if(x%2==0)
        {
            mine=min(mine,x);
        }
        else{
            mino=min(mino,x);
        }
    }
    if(mino==big||mine==big) cout<<"YES\n";
    else if(mine<mino) cout<<"NO\n";
    else cout<<"YES\n";
    return;
    }
int main()
{

    int t;
    cin>>t;
    while(t--)
        sol();
    return 0;
}
