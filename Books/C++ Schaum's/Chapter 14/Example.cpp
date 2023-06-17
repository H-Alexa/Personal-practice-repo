#include<iostream>
#include<fstream>

using namespace std;

struct employee{
    char name[20];
    int salary;
};

string s = "Example.txt";

//Read all records from file
void allread()
{
    employee emp;
    ifstream ef;
    ef.open(s);
    char ch;
    cout<<"=========Read all Records=======\n";
    while(!ef.eof())
    {
        ef.read((char*)&emp,sizeof(struct employee));
        if(!ef.eof())
        {
            cout<<"Name: "<<emp.name<<"\n";
            cout<<"Salary: "<<emp.salary<<"\n";
        }
    }
    ef.close();
    cout<<"End\n";
    return;
}

void allwrite()
{
    employee emp;
    ofstream of;
    of.open(s,ios::app);
    int n;
    cout<<"=========Write all Records=======\n";

    cout<<"Enter no of records you want to add: ";
    cin>>n;
    while(n--)
    {
        cout<<"Name: ";
        cin>>emp.name;
        cout<<"Salary: ";
        cin>>emp.salary;
        of.write((char*) &emp,sizeof(struct employee));
    }
    return;
}
void specificRead()
{
    struct employee emp;
    ifstream in;
    in.open(s);
    int r;
    cout<<"=========Read specific record=========\n";
    
}


int main()
{
    allwrite();
    allread();
    return 0;
}