//##AC solution
//##Problem: https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/bubble-sort-15-8064c987/


#include<bits/stdc++.h>
using namespace std;

#define fr(i,n) for(i=0;i<n;i++)
#define frs(i,a,n) for(i=a;i<n;i++)
#define frv(i,n) for(i=n-1;i>=0;i--)
#define ll long long
ll ar[5009];

ll bubsort(ll N)
{
    bool swapped = true;
    ll i, j, tmp,cnt;
    cnt=0;
    for(i=0;i<N;i++)
    {
        if(!swapped) break;
        swapped=false;
        cnt++;
        for(j=0;j<N-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                swapped = true;
                tmp = ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=tmp;
            }
        }
    }
    return cnt;
}

int main()
{
    ll N,i;
    cin>>N;
    fr(i,N) cin>>ar[i];
    cout<<bubsort(N)<<"\n";
    return 0;
}
