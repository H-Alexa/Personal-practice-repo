#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

struct Student{
    int ID;
    char name[30];
    char section;
    double GPA;
};

int main()
{
    struct Student s[5];
    int i;
    for(i=0;i<3;i++)
    {
        s[i].ID=i+1;
        cout<<"Name: ";
        (cin>>ws).getline(s[i].name, sizeof(s[i].name));  //NEW Thing
        cout<<"Section: ";
        cin>>s[i].section;
        cout<<"GPA: ";
        cin>>s[i].GPA;
    }
    for(i=0;i<3;i++)
    {
        cout<<"\n";
        cout<<"ID: "<<s[i].ID<<"\nName: "<<s[i].name<<"\nSection: "<<s[i].section<<"\nGPA: "<<s[i].GPA<<"\n";
    }

}
