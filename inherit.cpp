#include<iostream>
using namespace std;

class Person
{
    private:
        string name;
        string gender;
        string dob;
    public:
        Person(string n, string g, string d)
        {
            name=n;
            gender=g;
            dob=d;
        }

        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Gender: "<<gender<<endl;
            cout<<"DOB: "<<dob<<endl;
        }
};

class Doctor : public Person
{
    private:
        string spe;
        int fee;

    public:
        Doctor(string n, string g, string d, string s, int f)
        :Person(n,g,d)
        {
            spe=s;
            fee=f;
        }

        void display()
        {
            Person :: display();
            cout<<"Specialization: "<<spe<<endl;
            cout<<"Fee: "<<fee<<endl;
        }
};

class Student : public Person
{
    private:
        string course;
        string mobile;
    public:
        Student(string n, string g, string d, string c, string m)
        :Person(n,g,d)
        {
            course=c;
            mobile=m;
        }

        void display()
        {
            cout<<"Course: "<<course<<endl;
            cout<<"Mobile: "<<mobile<<endl;
        }
};

int main()
{
    Doctor doctor("Yousaf","Male","11 nov 99","ENT",5000);
    doctor.display();
    
}