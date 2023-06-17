#include<iostream>
#include<fstream>

using namespace std;

struct Employee{
    char name[20];
    int salary;
};

int main()
{
    ofstream out;
    Employee emp;
    out.open("Employee.txt");
    out.seekp(2*sizeof(struct Employee),ios::beg);
    cin>>emp.name>>emp.salary;
    out.write((char*) &emp, sizeof(struct Employee));
    out.close();
    ifstream in;
    in.open("Employee.txt");
    Employee omp;
    while(!in.eof())
    {
        in.read((char*) &omp,sizeof(struct Employee));
        cout<<omp.name<<" "<<omp.salary<<"\n";
    }
    in.close();
    return 0;
}