#include <iostream>

using namespace std;

class Animal
{
    public:
    // private:
    int legs = 4;
    string name;

    Animal(string name)
    {
        cout << "Line : "<<__LINE__<<endl;
        this->name = name;
    }

    Animal(int legs, string name) : Animal(name)
    {
        cout << "Line : "<<__LINE__<<endl;
        this->legs = legs;
    }

};


int main()
{
    Animal cat(8, "Kartick");

    cout<<cat.legs<<" "<<cat.name<<endl;
}