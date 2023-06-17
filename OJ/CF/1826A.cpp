#include<bits/stdc++.h>
using namespace std;
int cn[105];

void sol()
{
    int n;
    memset(cn,0,sizeof(cn));
    int x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        cn[x]++;
    }
    bool ok=false;
    int cnn=0;
    int no=0;
    int tm;
    for(int i=100;i>=0;i--)
    {
        if(cn[i])
        {
            if(i==no)
            {
                ok=true;
                cnn=no;
            }
            else if(i<no)
            {

                    ok=true;
                    cnn=no;
                    tm=no;
                    int ad=0;
                    for(int j=tm;j>i;j--)
                    {
                        if(j==i) continue;
                        if(cn[j]) {
                            ok=false;
                            break;
                        }
                    }



            }
            }
            if(ok) break;
            no+=cn[i];
//            no+=cn[i];
//            if(n-no>=i) {
//            ok=true;
//            cnn=n-cn[i];
//            break;
//            }

    }
    if(ok) cout<<cnn<<"\n";
    else cout<<"-1\n";
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
