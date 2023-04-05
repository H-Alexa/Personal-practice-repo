
##Problem: https://www.hackerearth.com/practice/algorithms/sorting/insertion-sort/practice-problems/algorithm/monk-and-nice-strings-3/

#include<bits/stdc++.h>
using namespace std;
void sor(int* ar,int n)
{
    int i,j,tmp;
    for(i=1;i<n;i++)
    {
        tmp=ar[i];
        for(j=i-1;j>=0;j--)
        {
            if(ar[j]<=tmp)
                {
                    break;
                }
            else
            {
                ar[j+1]=ar[j];
                ar[j]=tmp;
            }

        }
    }
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";

}
int main()
{
    int ar[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>ar[i];
    sor(ar,n);
    return 0;
}
