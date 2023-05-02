//AC

#include<bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin>>n;
    int cn=0;
    int rep =0 ;
    while(n!=0)
    {
//        cout<<(n>>1)<<"\n";
        if(((n>>1)*2)<n) {
            if(rep>11) {
                cn+=(1<<rep-11);
            }
            else cn++;

        }
        rep++;
        n=n>>1;

    }
    cout<<cn<<"\n";
    return;
}



int main()
{
    int T;
    cin>>T;
    while(T--)
        sol();
    return 0;
}
