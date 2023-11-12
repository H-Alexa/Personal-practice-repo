#include<iostream>
using namespace std;

void merge(int ar[], int st, int mid, int en)
{
    int an[100];
    int id = 0;
    int ls=st,le=mid,rs=mid+1,re=en;
    int pt=st;
    int i;
    for(i=0;i<en-st+1;i++)
    {
        
    }

}
void mergesort(int ar[], int st, int en)
{
    if(st==en) return;
    int mid=(st+en)/2;
    mergesort(ar,st,mid);
    mergesort(ar,mid+1,en);
    merge(ar,st,mid,en);
}
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++) a[i]=rand()%100;
    for(i=0;i<10;i++) cout<<a[i]<<" ";
    cout<<"\nInitial Array\n";
    mergesort(a,0,9);
    return 0;
}