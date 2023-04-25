#include<bits/stdc++.h>
using namespace std;

#define siz 100
int n;
void insertAt(int data, int position,int* ar)
{
    int i,temp;
    if(position==n) ar[n++]=data;
    else{
        temp=ar[position];
        ar[position]=data;
            n++;
        for(i=position+1;i<n;i++)
            {
                swap(ar[i],temp);
            }
    }
}

void deleteAt(int pos, int* ar)
{
    if(pos>=n) {
    cout<<"Error!\n";
    return;
    }
    for(int i=pos+1;i<n;i++)
    {
        ar[i-1]=ar[i];
    }
    n--;


}


int main()
{
    int ar[siz];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int data, pos;
    int option;
    cout<<"Enter 1 for deletion and 2 for insertion\n";
    while(cin>>option)
    {

    if(option==2)
    {
    cin>>data>>pos;
    if(pos>n) {
        cout<<"Error!\n";
        return 0;
    }
    insertAt(data,pos,ar);
    }
    else if(option==1)
    {
    cin>>pos;
    deleteAt(pos,ar);
    }
    else return 0;
        for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
        cout<<"\n";
    cout<<"Enter 1 for deletion and 2 for insertion\n";
    }

    return 0;
}
