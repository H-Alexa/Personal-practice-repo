#include<iostream>
#include<fstream>

using namespace std;
struct Employee{
    char name[20];
    int salary;
};
int main()
{
    Employee emp[5];
    ofstream out;
    out.open("Employee.txt");
    int n=3;
    int i;
    for(i=0;i<n;i++)
    {

    cout<<"Employee name: ";
    cin>>emp[i].name;
    cout<<"Salary: ";
    cin>>emp[i].salary;
    }
    if(!out.write((char*) &emp, 3*sizeof(struct Employee)))
        cout<<"Error\n";
    else cout<<"Success";
    out.close(); 
    return 0;
}