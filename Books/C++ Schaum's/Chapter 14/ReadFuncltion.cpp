#include<iostream>
#include<fstream>

using namespace std;

struct Employee{
    char name[20];
    int salary;
};

int main()
{
    ifstream in;
    Employee emp[5];
    in.open("Employee.txt");
    int i;
        i=1;
    in.read((char*) &emp, 3*sizeof(struct Employee));
    for(i=0;i<3;i++)
    {
        cout<<i+1<<" "<<emp[i].name<<" "<<emp[i].salary<<"\n";
    }
    return 0;
}