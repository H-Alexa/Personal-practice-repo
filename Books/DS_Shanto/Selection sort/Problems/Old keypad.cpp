

## Problem: https://www.hackerearth.com/practice/algorithms/sorting/selection-sort/practice-problems/algorithm/old-keypad-in-a-foreign-land-24/


#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *ar, int n)
{
    int pos,maxnum,i,j;
    for(i=0; i<n; i++)
    {
        maxnum=ar[i];
        pos=i;
        for(j=i+1; j<n; j++)
        {
            if(ar[j]>maxnum)
            {
                maxnum=ar[j];
                pos=j;
            }
        }
        ar[pos]=ar[i];
        ar[i]=maxnum;
//        cout<<ar[i]<<" _ ";
    }
    return;
}

int main()
{
    int N,K,i,j;
    int freq[60],key[60];
    cin>>N;
    int total = 0;
    for(i=0; i<N; i++)
    {
        cin>>freq[i];
        total+=freq[i];
    }


    selectionSort(freq,N);


    cin>>K;
    int totkey=0;
    for(i=0; i<K; i++)
    {
        cin>>key[i];
        totkey+=key[i];
    }

    if(totkey<N)
    {
        cout<<"-1\n";
        return 0;
    }

    int cnt=0,tim = 0;
    int pos= 0;
//    cout<<"here\n";
//    for(i=0; i<N; i++) cout<<freq[i]<<" ";
//    cout<<"\n";
    cnt=0;
    while(total>0)
    {
        tim++;
//        cout<<total<<" "<<tim<<"\n";
        for(i=0; i<K; i++)
        {
            if(key[i]>0)
            {
//                cout<<i<<" "<<key[i]<<" "<<freq[pos]<<" "<<tim<<"\n";
                cnt+=(freq[pos]*tim);
                key[i]--;
                total-=freq[pos];
                pos++;
            }
            if(pos>=N||total==0) break;
        }
            if(pos>=N||total==0) break;
    }
    cout<<cnt<<"\n";
    return 0;
}
