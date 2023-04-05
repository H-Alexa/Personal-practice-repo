#include<bits/stdc++.h>
using namespace std;
#define siz 1009

char ar[siz][12];
//void copychar(char a[12], char b[12])
//{
//    int i,n;
//    n=strlen(a);
//    for(i=0;i<n;i++)
//        a[i]=b[i];
//    b[i]='\0';
//    return;
//}

//void insertionSort(int N)
//{
//    char temp[siz][12];
//    int pos=0;
//    copychar(ar[0],temp[0]);
//    for(int i=1;i<N;i++)
//    {
//        if(temp[i-1]<=ar[i])
//        {
//
//        }
//    }
//
//}
void sol(int N)
{
    int i,snt,j;
    for(i=0;i<N;i++)
    {
        snt=0;
        for(j=i-1;j>=0;j--)
        {
            if(strcmp(ar[j],ar[i])<0) {
//            cout<<ar[i]<<" "<<ar[j]<<"\n";
            snt++;
            }
        }
        cout<<snt<<"\n";
    }
    return;


}
int main()
{
//    while(1)
//    {
//    char aa[10],bb[10];
//    cin>>aa>>bb;
//    if(aa>bb) cout<<aa<<"\n";
//    else cout<<bb<<"\n";
//    }
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>ar[i];
    }
    sol(N);
    return 0;
}
