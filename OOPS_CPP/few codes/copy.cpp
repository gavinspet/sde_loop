#include <iostream>

using namespace std;

class person
{
    public:
        string name;
        int age;

};


int main()
{
    person P1;
    P1.name = "tarun";
    P1.age = 18;

    person P2 = P1;   // shallow copy

    cout<<P1.name<<endl;
    cout<<P2.name<<endl;

    P2.name = "Kartick";

    person P3;    
    P3.name = P1.name;   // deep copy
    P3.age = P1.age;    

}