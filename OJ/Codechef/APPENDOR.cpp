#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[100009];
void sol()
{
    ll n, y;
    cin>>n>>y;
    int i;
    ll ans;
    for(i=0;i<n;i++)
    {
    cin>>ar[i];
    if(i==0) ans=ar[i];
    else{
    ans=ans|ar[i];
    }
    }
    ll cn=0;
    ll mul=0;
//    cout<<ans<<"\n";
    for(i=0;;i++)
    {
        if(y==0&&ans==0) break;
        if(((y>>1)*2)==y&&((ans>>1)*2)<ans)
        {
            cout<<"-1\n";
            return;
        }
        else if(((y>>1)*2)<y&&((ans>>1)*2)==ans)
        {
            if(mul==0)
            {
                cn+=1;
                mul=1;
            }
            else
            {
                cn+=mul;
            }
        }
        if(mul==0) mul=1;
//        cout<<i+1<<" "<<cn<<"\n";
        mul*=2;
        y=y>>1;
        ans=ans>>1;
    }
    cout<<cn<<"\n";

}


int main()
{
    int T;
    cin>>T;
//    cout<<(T>>1)*2;
    while(T--)
    sol();
    return 0;
}
