//It's given in book. I just tried to understand the logic and then from my understanding, wrote the code. I used 0 based indexing for storing but 1 based for printing


#include<bits/stdc++.h>
using namespace std;
bool done;
bool column[20],leftToRight[40],rightToLeft[40];
int queen[20];
void nqueen(int att, int n)
{
    if(done) return;
    if(att==n)
    {
        done=true;
        for(int i=0;i<n;i++)
            cout<<"(Row, Column): "<<i+1<<", "<<queen[i]<<"\n";
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(att==0&&n%2==0&&i==0) continue;
        if(column[i]||leftToRight[i+att]||rightToLeft[n+att-i]) continue;
        column[i]=leftToRight[i+att]=rightToLeft[n+att-i]=true;
        queen[att]=i+1;
        nqueen(att+1,n);
        column[i]=leftToRight[i+att]=rightToLeft[n+att-i]=false;
    }
}


int main()
{
    memset(column,false,sizeof(column));
    memset(leftToRight,false,sizeof(leftToRight));
    memset(rightToLeft,false,sizeof(rightToLeft));
    done = false;
    int n;
    cin>>n;
    nqueen(0,n);
}
