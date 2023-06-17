#include<iostream>
#include<fstream>

//ifstrem &read(char * buf, streamsize num)
//ofstream &write(char * buf, streamsize num)
using namespace std;
struct employee
{
    char name[20];
    int salary;
};

int main()
{
    employee emp;
    char ch; int i;
    ofstream out;
    out.open("Employee");
    cout<<"Employee name: ";
    cin>>emp.name;
    cout<<"Employee Salary: ";
    cin>>emp.salary;

    if(!out.write((char*) &emp, sizeof(struct employee)))
        cout<<"Error\n";
    else cout<<"inserted successfully\n";
    out.close();

    ifstream in;
    in.open("Employee",ios::binary);
    if(!in)
        cout<<"Error\n";
        else
        {
            i=1;
            while(!in.eof())
            {
                in.read((char*) &emp, sizeof(struct employee));
                if(!in.eof())
                {
                    cout<<"Record no: "<<i<<"\n";
                    cout<<"Employee name: "<<emp.name<<"\n";
                    cout<<"Employee Salary: "<<emp.salary<<"\n";
                }
            }
            in.close();
        }
    return 0;
}