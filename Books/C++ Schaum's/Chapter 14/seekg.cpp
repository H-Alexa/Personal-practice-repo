#include<iostream>
#include<fstream>

using namespace std;

//seekg: input_stream.seekg(offset,origin)
//seekp: output_stream.seekp(offset.origin)

struct Employee{
    char name[20];
    int salary;
};

int main()
{
    ifstream in;
    Employee emp;
    in.open("Employee.txt");
    in.seekg(1*sizeof(struct Employee),ios::beg);
    in.read((char*) &emp, sizeof(struct Employee));
    if(!in.eof())
    {
        cout<<emp.name<<" "<<emp.salary<<"\n";
    }
    in.close();
    return 0;
}