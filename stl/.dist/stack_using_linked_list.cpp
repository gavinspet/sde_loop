#include <iostream>

using namespace std;

class node {
public:
  int data;
  node *next;

  node(int data) : data(data), next(nullptr){};
};

// stack functions -
// push - push element on the top
// pop  - see and remove the element
// peek - just see
// isempty - returns true or false

class stack {
  node *top;

public:
  int push(int data) {
    node *curr = new node(data);
    curr->next = top;
    top = curr;
  }

  int peek() {
    if (isEmpty()) {
      cout << "khali hai\n";
      return -1;
    } else
      return top->data;
  }

  int pop() {
    if (isEmpty()) {
      std::cout << "Stack is empty\n";
      return -1;
    }

    node *temp = top;
    int d = top->data;
    top = top->next;
    delete temp;
    return d;
  }

  bool isEmpty() { return top == nullptr; }

  ~stack() {
    while (!isEmpty()) {
      pop();
    }
  }
};

int main() {}