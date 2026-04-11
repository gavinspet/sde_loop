#include <iostream>
#include <mutex>

class singleton {

  static singleton *instance;
  static std::mutex mtx;
  int a;

  singleton(){};                              // default
  singleton(const singleton &other) = delete; // copy
  singleton &operator=(const singleton &other) = delete;

public:
  static singleton *getInstance() {
    if (instance == nullptr) {
      mtx.lock();
      if (instance == nullptr) {
        instance = new singleton();
      }
      mtx.unlock();
    }
    return instance;
  }

  void getA() { std::cout << "a is = " << a << std::endl; }

  void setA(int a) { this->a = a; }
};

singleton *singleton::instance = nullptr;
std::mutex singleton::mtx;

int main() {
  singleton *a = singleton::getInstance();

  a->setA(10);
  a->getA();

  singleton *b = singleton::getInstance();
  b->setA(20);
  a->getA();
}
