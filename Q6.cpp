#include<iostream>
using namespace std;

class Employee
{
    protected:
        string name;
        int salary;
        string post;
    public:
        virtual void emp() = 0;

        void input()
        {
            cout<<"enter name:"<<endl;
            cin>>name;
            cout<<"entr salary:"<<endl;
            cin>>salary;
            cout<<"enter post name:"<<endl;
            cin>>post;
        }
};
class Employee1 : public Employee
{
    public:
        void emp()
        {
            cout<<"Name is: "<<name<<endl;
            cout<<"Salary is: "<<salary<<endl;
            cout<<"Post is: "<<post<<endl;
        }
};

class Employee2 : public Employee
{
    public:
        void emp()
        {
            cout<<"Name is: "<<name<<endl;
            cout<<"Salary is: "<<salary<<endl;
            cout<<"Post is: "<<post<<endl;
        }
};

int main()
{
    Employee *e;

    Employee1 e1;
    e = &e1;
    e->input();
    e->emp();

    Employee2 e2;
    e = &e2;
    e->input();
    e->emp();

}