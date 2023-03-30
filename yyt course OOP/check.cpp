#include<iostream>
using namespace std;
class AbEmployee{
    virtual void Prom()=0;
};

class Employee:AbEmployee{
protected:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCom(string com)
    {
        Company = com;
    }
    string getCom()
    {
        return Company;
    }
    void setAge(int n)
    {
        if(n>=18)
        Age = n;
    }
    int getAge(){
        return Age;
    }
    void Intro()
    {
        cout<<"Name: "<<Name<<"\n";
        cout<<"Compane: "<<Company<<"\n";
        cout<<"Age: "<<Age<<"\n";

    }   

    virtual void Work()
    {
        cout<<Name<<" is doing work\n";
    }
    virtual void Prom() {
        if (Age>30)
        cout<<Name<<" got promoted\n";
        else cout<<"No\n";
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }   
};

class Developer: public Employee {
    public:
        string FavLanguage;
        Developer(string name, string company, int age, string lan)
            :Employee(name,company,age)
    {

        FavLanguage = lan;
       
    }
        void Work()
    {
        cout<<Name<<" is writing "<<FavLanguage<<" code\n";
    }
     void Check(){
            cout<<getName()<<" "<<FavLanguage<<"\n";
        }
};

class Teacher: public Employee{
    public:
    string Subject;
    void PrepareLesson(){
        cout<<Name<<" is preparing "<<Subject<<" Lesson\n";
    }
        void Work()
    {
        cout<<Name<<" is teaching "<<Subject<<"\n";
    }
    Teacher(string name, string com, int age, string sub)
        :Employee(name, com,age)
        {
            Subject=sub;
        }
};


int main()
{
    int number;
    Employee emp2("Araf", "Google", 31);
    
    Employee emp1("Tatinee", "Bekar", 25);
    Developer d("Okay","Facebook",40,"Pascal");
    Teacher t("Jack","Cool",34,"CP");
    // d.Intro();
    // t.PrepareLesson(); 
    // t.Prom();
    // emp1.Work();
    // d.Work();
    // t.Work();

    Employee *e = &d;
    Employee *e2 = &t;

    e->Work();
    e2->Work();


    
    // emp1.setAge(14);

    //  emp1.Intro();
    // cout<<emp1.getName()<<"\n";
    // Employee emp2;
    // emp2.Name = "Shala";
    // emp2.Company = "Amazon";
    // emp2.Age = 21;

    // emp2.Intro();
    emp1.Prom();
    emp2.Prom();
    

    return 0;
}