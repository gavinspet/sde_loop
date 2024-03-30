#include <iostream>

using namespace std;

// after a function call it will call another function and so on
// then waits until the function called gets executed
// all the calls gets stored in a stack
// compiler gives space for the call stack

// when there is no more space in call stack but we are still calling
// then we call it --> STACK OVERFLOW
// compiler will throw segmentation fault

// infinite recursion call
void funct() {
  cout << "1" << endl;
  funct();
}

int counter = 0;

// recursive function with base case --> BASE CASE
void funct1() {
  if (counter == 10)
    return;

  // do work
  printf("1\n");

  counter++;
  funct1();
}

// f(0)-> f(2)-> .....-> f(10) --> RECURSION TREE

int main() {
  // funct();
  funct1();
}