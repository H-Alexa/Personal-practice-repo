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
int inp[nod][nod+1];
//ONLY ADVANTAGE ADDING NEW NODE ON O(1)
//will store size at index [0] and will add adjacencies at following indexes
//what if duplicate edges are given? how to check that efficiently
//bRUTe force: Check in the list of any of the edges with minimum no of connections

int main()
{
    cout<<"Edge no: ";
    int edge;
    int a,b;
    cin>>edge;
    int i;
    fr(i,edge)
        {
            cin>>a>>b;
            inp[a][0]++;
            inp[a][inp[a][0]]=b;
            inp[b][0]++;
            inp[b][inp[b][0]]=a;
        }
    fr(i,nod)
    {
        if(inp[i][0]==0)
            break;
        int j;
        cout<<i<<" : Node\nConnections:\n";
        frs(j,inp[i][0]+1)
        {
            cout<<inp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
