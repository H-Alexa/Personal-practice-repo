#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream of;
    int test;
    cin>>test;
    of.open("text.txt");
    while(test--)
    {
        of<<"One day, I'll have it all!\n";
    }
    of.close();
    ifstream ifile;
    char c;
    string filename;
    cin>>filename;
    ifile.open(filename.c_str());
    while(ifile.good())
    {
        ifile.get(c);
        cout<<c;
    }
    return 0;
}
