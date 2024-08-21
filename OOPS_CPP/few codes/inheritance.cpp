#include <iostream>

using namespace std;

// parent class; base class
class Animal
{

    private :
    // data members
    int leg = 4;
    string name;
    
    public:
    //parameterised constructor
    Animal(string name)
    {
        this->name = name;
    }


    Animal(int leg, string name):  Animal(name)
    {
        // name = "Mr. "+ name;
        // Animal(name);
        this->leg = leg;
    }

    // data methods
    void sleep() {cout<<"Sleep \n";}
    void eat() {cout<<"Eat \n";}
    void getName() {cout<<this->name<<"\n";}
    void setName(string name) { this->name = name; }

   
};

// child class; dervied class
class cat : protected Animal
{
    public:
    void meow()
    {
        cout<<"meow meow \n";
    }
};


int main()
{

    cat hunu;

    

}