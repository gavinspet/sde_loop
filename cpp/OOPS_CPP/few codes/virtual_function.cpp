#include <bits/stdc++.h>

using namespace std;

class A {
public:
  void f1() { cout << "A ka f1 \n"; }

  virtual void f2() { cout << "A ka f2 \n"; }

  virtual void f3() { cout << "A ka f3 \n"; }

  virtual void f4() { cout << "A ka f4 \n"; }
};

class B : public A {
public:
  using A::f4;
  void f1() { cout << "B ka f1 \n"; }

  void f2() { cout << "B ka f2 \n"; }

  void f4(int x) { // function hiding
    cout << "B ka maal hai: " << x << "\n";
  }
};

int main() {
  A *p, o1;
  B o2;

  p = &o2;

  o2.f4();
  o2.f4(5);

  // p->f1();
  // p->f2();
  // p->f3();
  // p->f4();   // Calls A's f4
  // p->f4(4);
  // o2.f4();
  // o2.f4(9)

  // cout<<"size  of A obj = "<<sizeof(o1)<<endl;
  // cout<<"size  of B obj = "<<sizeof(o2)<<endl;
}
