#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    out.open("Eof.txt");
    int i = 0;
    int n=9;
    for(i=0;i<n;i++)
    {
        char ch = 'A'+i;
        out.put(ch);
    }
    out.close();
    in.open("Eof.txt");
    while(!in.eof())
    {
        char ch = in.get();
        cout<<ch<<" ";
    }
    cout<<"\n";
    in.close();
    return 0;
}