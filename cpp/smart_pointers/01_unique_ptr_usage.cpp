#include <iostream>
#include <memory>

int main() {
  std::unique_ptr<int> p(new int(17));
  std::cout << p.get() << std::endl; // prints address of the containing ptr
  // std::unique_ptr<int> q = p; // compilation error
  std::unique_ptr<int> q = std::move(p); // moving ownership is allowed
  std::cout << q.get() << std::endl;
  std::cout << p.get() << std::endl;

  std::cout << *q << std::endl; // value stored
  std::cout << &q << std::endl; // address of ptr q holds
  q.reset(new int(69));         // reset q
  std::cout << *q << std::endl; // value stored
  q.release();
  // *q = 78;
  // std::cout<<*q<<std::endl;  // value stored

  /*
  1. wrapper class
  2. no copy allowed, only one instance
  3. move is allowed
  4. reset is ok
  5. release destroys the object, further using gives segmentation fault
  */
}