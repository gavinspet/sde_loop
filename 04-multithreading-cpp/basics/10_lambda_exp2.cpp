#include <iostream>

int main() {
  int x = 5;
  auto f = [x]() mutable {
    x++;
    return x;
  };

  std::cout << f() << std::endl;
}