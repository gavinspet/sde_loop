#include <iostream>

using namespace std;

/*
 Enum (Enumeration) is a user-defined data type in C++
 used to define a set of named integer constants. 
 It provides a way to give meaningful names to a set of 
 related integer values, making the code more readable and 
 self-documenting. Enums are often used to define sets of 
 options, states, or flags in your programs.*/

enum state_of_mind
{
    drepressed = 0,
    anxious,
    happy,
    sad,
    angry,
    // excited,
    // stressed,
    // numb
};

enum Color : char {
    RED,
    GREEN,
    BLUE
};


// string not allowed since it is not an integral type
// enum Color : string {
//     RED,
//     GREEN,
//     BLUE
// };

// Array of strings to map enum values to their names
string state_names[] = {
    "depressed",
    "anxious",
    "happy",
    "sad",
    "angry",
    "excited",
    "stressed",
    "numb"
};

int main()
{
    state_of_mind abbu = happy;
    // abbu = state_of_mind::numb;
    cout<<state_of_mind::angry<<endl;
    cout<<static_cast<int>(Color::GREEN)<<endl;
    cout<<abbu<<endl;
    cout<<state_names[abbu]<<endl;
    cout<<"size of the enum state of mind : "<<sizeof(state_of_mind)<<endl;
    cout<<"size of the enum color : "<<sizeof(Color)<<endl;
}

