#include <iostream>

using namespace std;

class person
{
    public:
    string name;
    int age;
    bool likesIcecream;

    public:
    // default constructor
    person()
    {
        cout<<"Default constructor called \n";
    }

    // parameterised constructor
    person(string name)
    {
        cout<<"Parameterised constructor called \n";
        this->name = name;
    }

    // delegate constructor
    person(string name, int age) : person(name)
    {
        this->age = age;
        cout<<"Delegate constructor called \n";
    }

    // copy constructor ..
    person(const person& obj)
    {
        this->age = obj.age;
        this->name = obj.name;
        this->likesIcecream = obj.likesIcecream;
    }
  
    // assignment operator
    person& operator=(const person& other) {
        cout << "Shallow copy assignment operator called" << endl;
        if (this != &other) {
            name = other.name;  // Copying string by reference (shallow copy)
            age = other.age;
            likesIcecream = other.likesIcecream;
        }
        return *this;
    }

    // Move constructor
person(person&& other) noexcept
{
    cout << "Move constructor called" << endl;
    // Transfer ownership of resources using std::move
    name = std::move(other.name);
    age = std::move(other.age);
    likesIcecream = std::move(other.likesIcecream);
    // Reset the source object to a valid state
    other.name = "";
    other.age = 0;
    other.likesIcecream = false;
}


    public:

    void sleeps() {
        cout<<"Sleeps \n";
    }

     void eats() {
        cout<<"Eats \n";
    }

};

int main()
{
    // person p1; // default
    // person p2("kartick"); // parameterised
    person p3 ("Swarnendu", 24); // delegate
    person p4 = p3;  // default copy constructor .. deep copy
    person p5;
    // p5 = p3; // copy assignment operator .. shallow copy
    cout<<"p4 deep, p5 shallow"<<endl;
    cout<<"p4: "<<p4.name<<endl; 
    cout<<"p5: "<<p5.name<<endl; 
    p3.name = "Jadeja";
       cout<<"p4: "<<p4.name<<endl; 
    cout<<"p5: "<<p5.name<<endl; 
    cout<<p3.name<<endl;
    person p6  = std::move(p3);
}