#include<iostream>
using namespace std;

class Animal
{
    public:
        void eating()
        {
            cout<<"Eating"<<endl;
        }
        void sleeping()
        {
            cout<<"Sleeping"<<endl;
        }
        virtual void sound()=0;
};

class Cat : public Animal
{
    public:
        void sound()
        {
            cout<<"Mew Mew"<<endl;
        }

};

class Cow : public Animal
{
    public:
        void sound()
        {
            cout<<"Baaaw"<<endl;
        }
};

class Lion : public Animal
{
    public:
        void sound()
        {
            cout<<"Roaring"<<endl;
        }
};

int main()
{
    Animal *animal;

    Cat cat;
    animal=&cat;
    animal->eating();
    animal->sleeping();
    animal->sound();

    cout<<"********************"<<endl;

    Cow cow;
    animal=&cow;
    animal->eating();
    animal->sleeping();
    animal->sound();

    cout<<"*********************"<<endl;

    Lion lion;
    animal=&lion;
    animal->eating();
    animal->sleeping();
    animal->sound();    


}