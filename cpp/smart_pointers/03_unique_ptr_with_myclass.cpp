#include <iostream>
#include <memory>

class my_class {
public:
  void display() { std::cout << "display\n"; }
};

int main() {
  std::unique_ptr<my_class> p;
  p = std::make_unique<my_class>();

  p->display();
}