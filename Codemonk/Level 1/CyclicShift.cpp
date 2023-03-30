#include<iostream>
using namespace std;

#define siz 100009
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
char ar[siz];

ll numar[siz];

void init(ll n)
{
    fr(i,n)
    {
        numar[i]=n-i;
//        cout<<numar[i]<<" |";
    }
    return;
}
ll compute(ll pos, ll n)
{
ll i,j=0,cn=0;
    for(i=pos;j<n;i++,j++)
    {
        i%=n;
        cn+=(ar[i]-'0')*numar[j];
        cout<<(ar[i]-'0')*numar[j]<<" "<<ar[i]<<" "<<numar[j]<<" "<<cn<<"\n";
    }
    return cn;
}

void sol()
{
    ll N, K;
    cin>>N>>K;
    cin>>ar;
    init(N);
    cout<<compute(6,N)<<" "<<compute(89,N)<<"\n";
    ll mx,posone,postwo,rep,repmx;
    mx=-1;
    rep=0;
    repmx=-1;
//    for(int i=0;i<N;i++)
//    {
//        ll cn=compute(i,N);
//        cout<<cn<< " "<<i<<"_______\n";
//        if(cn==mx)
//        {
//            if(repmx==mx)
//            {
//                rep++;
//            }
//            else {
//                repmx=mx;
//                rep=1;
//                postwo=i;
//            }
//
//            }
//        else if(cn>mx)
//        {
//            mx=cn;
//            posone=i;
//        }
//
//    }
//    if(mx!=repmx)
//    {
//        ll ans=posone+(N*(K-1));
//        cout<<ans<<"\n";
//    }
//    else{
//        ll ans=posone+((postwo-posone)*(K-1));
//        cout<<ans<<"\n";
//    }

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
