#include<iostream>
using namespace std;

class Employee
{
    protected:
        string name, post;
    public:
        void input()
        {
            cout<<"Enter name: "<<endl;
            cin>>name;
            cout<<"Enter post name: "<<endl;
            cin>>post;
        }
     
};

class Allowance
{
          
    protected:
            float basic,ma,net;
    public:
        void cal()
        {
            cout<<"enter basic salary:"<<endl;
            cin>>basic;
            ma=basic*0.3;
            net=ma+basic;
        }
     
};

class Show : public Employee, public Allowance
{
   public:
    
           void show()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Post Name: "<<post<<endl;
        }
           void display()
        {
            cout<<"Basic salary is: "<<basic<<endl;
            cout<<"Medical allowance is:"<<ma<<endl;
            cout<<"Net salary is: "<<net<<endl;
        }
    
};

int main()
{
    Show a;
    a.input();
    a.cal();
    a.show();
    a.display();
}
