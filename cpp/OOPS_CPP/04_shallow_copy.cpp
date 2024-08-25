#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <thread>
#include <unistd.h>

using namespace std;

class person {
public:
  char *name = nullptr;
  int age = 0;

public:
  // default constructor
  person() {
    // cout<<"default constructor called \n";
  }

  // parameterised constructor - shallow copy
  person(char *name) {
    this->name = name;
    // cout<<"parameterised constructor called \n";
  }

  // copy constructor
  person(const person &obj) {
    this->age = obj.age;
    this->name = obj.name;
  }

  ~person() {
    // cout<<"default destructor called \n";
  }
};

int main() {
  person p;
  char str[] = "kartick";
  person p1(str); // calling param constructor
  p1.age = 26;

  // copy constructor
  person p2(p1);
  cout << "p2.age = " << p2.age << endl;
  cout << "p2.name = " << p2.name << endl;

  str[2] = 'x';

  cout << "p1 name pointer address: " << static_cast<void *>(p1.name)
       << endl; // same
  cout << "p2 name pointer address: " << static_cast<void *>(p2.name)
       << endl; // same
  // p1->name and p2->name are different pointers but pointing to the same
  // memory

  cout << "p2.age = " << p2.age << endl;
  cout << "p2.name = " << p2.name << endl;
}