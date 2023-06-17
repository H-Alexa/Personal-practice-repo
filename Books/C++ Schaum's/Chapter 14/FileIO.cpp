#include<iostream>
#include<fstream>

using namespace std;

int main()
{
        char ch;
        ifstream in;
        
        // out.open("Employee.txt");
        // if(!out) cout<<"Didn't open\n";
        // else cout<<"Successful\n";
        
        // out.close();
        in.open("inp.txt");
        if(!in.is_open()) in.open("inp.txt");
        else cout<<"Not opened\n";
        
        return 0;
}
