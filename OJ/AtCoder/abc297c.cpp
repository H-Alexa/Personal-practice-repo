//AC solution



#include<bits/stdc++.h>
using namespace std;

char in[109][109];

void sol()
{
    int h,w,i,j;
    cin>>h>>w;
    for(i=0;i<h;i++)
    {
        cin>>in[i];
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<w-1;j++)
        {
            if(in[i][j]=='T'&&in[i][j+1]=='T')
            {
                in[i][j]='P';
                in[i][j+1]='C';
                j++;
            }
        }
    }
    for(i=0;i<h;i++)
    cout<<in[i]<<"\n";
    return;

}

int main()
{
    sol();
    return 0;
}

