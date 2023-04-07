//##AC solution
//##Problem: https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/ants-on-the-circle-928dbbba/


#include<bits/stdc++.h>
using namespace std;

#define fr(i,n) for(i=0;i<n;i++)
#define frs(i,a,n) for(i=a;i<n;i++)
#define frv(i,n) for(i=n-1;i>=0;i--)
#define ll long long
ll manipulate(ll x, ll n)
{
    if(x<=0)
        return n-((-x)%n);
    else
    {
    if(x<=n) return x;
    else
        if(x%n==0) return 5;
        return x%n;
    }
}
ll ar[1009];

void bubsort(ll M)
{
    ll i,j;
    fr(i,M)
    {
        fr(j,M-i-1)
        {
            if(ar[j]>ar[j+1])
            {
                ll temp = ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    return;
}

int main()
{
    ll N,M,T,i,j,x,y;
    cin>>N>>M>>T;
    fr(i,M)
    {
        cin>>x>>y;
        ar[i]=manipulate(x+(y*T),N);
//        cout<<manipulate(x+(y*T),N)<<" "<<x<<"\n";
    }
    bubsort(M);
    fr(i,M) cout<<ar[i]<<" ";
    cout<<"\n";
    return 0;
}
