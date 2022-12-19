#include<iostream>
using namespace std;

class Employee
{
    private:
        string name;
        string post;
    protected:
        float basic;
    public:
         void input()
        {
            cout<<"Enter name of employee:"<<endl;
            cin>>name;
            cout<<"Enter Post Name:"<<endl;
            cin>>post;
            cout<<"Enter basic salary:"<<endl;
            cin>>basic;
        }
        void show()
        {
            cout<<"Name is: "<<name<<endl;
            cout<<"Post is: "<<post<<endl;
            cout<<"Basic salary is: "<<basic<<endl;
        }
};

class Allowance : public Employee
{
    private:
        float medical,net;
    public:
        void cal()
        {
            
            medical = basic*0.3;
            net = basic+medical;
        }
        void display()
        {
            cout<<"Medical allowance is: "<<medical<<endl;
            cout<<"total salary is: "<<net<<endl;
        }
};

int main()
{
    Allowance a;
    a.input();
    a.show();
    a.cal();
    a.display();
}