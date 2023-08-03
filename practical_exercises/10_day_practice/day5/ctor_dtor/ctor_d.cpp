//新的类含有类成员和父类时候，构造：父类、类成员类、类本身 析构：类本身 类成员类、父类
#include <iostream>
using namespace std;
class A {
public:
  A() { cout << "Constructing A" << endl; }
  ~A() { cout << "Destructing A" << endl; }
};
class B {
public:
  B() { cout << "Constructing B" << endl; }
  ~B() { cout << "Destructing B" << endl; }
};
class C {
public:
  C() { cout << "Constructing C" << endl; }
  ~C() { cout << "Destructing C" << endl; }
};
class D : public C {
public:
  D() { cout << "Constructing D" << endl; }
  ~D() { cout << "Destructing D" << endl; }
  B b;
  A a;
  C c;
};

int main() {
  D d;
  
}

/*
执行结果：
Constructing C
Constructing B
Constructing A
Constructing C
Constructing D
Destructing D
Destructing C
Destructing A
Destructing B
Destructing C
*/
