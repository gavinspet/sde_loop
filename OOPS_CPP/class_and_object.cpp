#include <iostream>
#include <string>
using namespace std;

enum FoodHabit {
    herbivore,
    carnivore,
    omnivore
};

class animals {
public:

    // data members
    int16_t legs;
    FoodHabit foodHabit;
    string colour;
    

    // data method
    void setLegs(int16_t x) {
        legs = x;
    }
    void setColour(const string& s);

    // just a constructor
    animals()
    {
        legs = 0;
        this->foodHabit = omnivore;
        this->colour = "nil";
    }


    // parameterised constructor
     animals(int16_t x, FoodHabit y, string z)
    {
        legs = x;
        this->foodHabit = y;
        this->colour = z;
    }

    // copy constructor
    animals(const animals &obj)
    {
        legs = 4;
        foodHabit = obj.foodHabit;
        colour = obj.colour;
    }

    public:
    ~ animals()
    {
        cout<<"destructor inside the class is running"<<endl;
    }
};

// Definition of data method outside the animals class
void animals::setColour(const string& s) {
    colour = s;
}

int main() {
    animals *cat = new animals(4,omnivore,"white");
    // animals cat(3,herbivore,"orange");
    // animals *cat = cat1;
//    delete(cat1);
    // animals cat; vs animals cat = new animals();
    // cat.setLegs(4);
    // cat.foodHabit = omnivore;
    // cat.setColour("multi");

    cout << cat->legs << endl;

    switch (cat->foodHabit) {
        case herbivore:
            cout << "Herbivore" << endl;
            break;
        case carnivore:
            cout << "Carnivore" << endl;
            break;
        case omnivore:
            cout << "Omnivore" << endl;
            break;
    }

    cout << cat->colour << endl;

    delete(cat);
}
