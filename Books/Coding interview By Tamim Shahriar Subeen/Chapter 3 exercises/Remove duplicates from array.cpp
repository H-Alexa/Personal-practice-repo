#include<bits/stdc++.h>
using namespace std;

// 1 1 1 1 1 2 2 3
int sol(int* p, int* ar)
{
    int i,pos=0;
    for(i=1;i<*p;i++)
    {
        if(ar[pos]<ar[i])
        {
            ar[++pos]=ar[i];
        }
    }
    *p=pos+1;
    return pos+1;
}
void input(int* p, int* ar)
{
    cin>>*p;
    int n=*p;
    int i;
    for(i=0;i<n;i++)
    cin>>ar[i];
}
void print(int n, int *ar)
{
cout<<n<<"\n";
for(int i=0;i<n;i++) cout<<ar[i]<<" ";
cout<<"\n";

}

int main()
{
    int ar[100];
    int n;
    input(&n,ar);
    cout<<sol(&n,ar);
    print(n,ar);
    return 0;
}
