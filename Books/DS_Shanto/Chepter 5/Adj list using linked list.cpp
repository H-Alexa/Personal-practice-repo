/*
v0 -> v2, v1
v1 -> v0, v2
v2 -> v1, v0
v3 -> v2, v4
v4 -> v1, v3

input
6
0 2
0 1
1 2
2 3
3 4
1 4
*/

#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(i=0;i<n;i++)
#define frs(i,n) for(i=1;i<n;i++)
#define nod 10

class LinkedList{
public:
    int data;
    LinkedList* next;
};


LinkedList* Head[nod],*Tail[nod];
void init()
{
    int i;
    fr(i,nod)
    {
        Head[i]=NULL;
        Tail[i]=NULL;
    }
    return;
}

void ins(int n, int idx)
{
    LinkedList* node = new LinkedList;
    node->data = n;
    node->next = NULL;

    if(Head[idx]==NULL)
    {
        Head[idx]=Tail[idx]=node;
    }
    else    {
//        Tail[idx]->next=new LinkedList;
        Tail[idx]->next=node;
        Tail[idx]=node;
    }
    return;
}

void traverse()
{
    int i;
    fr(i,nod)
    {
        if(Head[i]==NULL) return;
        int j;
        LinkedList* node = new LinkedList;
        node=Head[i];
        cout<<i<<" :\n";
        while(node!=NULL)
        {
            cout<<node->data<<" ";
            node=node->next;
        }
        cout<<"\n\n";
    }

}


int main()
{
    init();
    cout<<"Edge no: ";
    int edge;
    int a,b;
    cin>>edge;
    int i;
    fr(i,edge)
        {
            cin>>a>>b;
            ins(b,a);
            ins(a,b);
        }
    traverse();

    return 0;
}
