#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("Employee");
    char ch;
    int i;
    if(!out) cout<<"Error\n";
    for(i=0;i<9;i++)
    {
        ch='A'+i;
        out.put(ch);
    }
    out.close();
    ifstream in("Employee");
    for(i=0;i<9;i++)
    {
        ch=in.get();
        cout<<ch<<" ";
    }
    cout<<"\n";
    in.close();
}