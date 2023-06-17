#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    ofstream out;
    out.open("Employee");
    if(!out) cout<<"Error\n";
    else{
        out<<"Pam"<<10000<<"\n";
        out<<"Jim"<<20000<<"\n";
        out<<"Michael"<<25000<<"\n";
    }
    out.close();
    ifstream in;
    in.open("Employee");
    if(!in) cout<<"Error\n";
    else{
        char name[20];
        int salary;
        in>>name>>salary;
        cout<<name<<" "<<salary<<"\n";
        in>>name>>salary;
        cout<<name<<" "<<salary<<"\n";
        in>>name>>salary;
        cout<<name<<" "<<salary<<"\n";
        in.close();
    }
    return 0;
}