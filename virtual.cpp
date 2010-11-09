#include <stdio.h>
#include <iostream>
using namespace std;

class A
{
  public:
    void x() { cout << "class A, function x" << endl;}
    virtual void y() { cout << "class A, function y" << endl;}
};

class B: public A
{
  public:
    virtual void x() { cout << "class B, function x" << endl;}
    void y() { cout << "class B, function y" << endl;}
};

class C: public B
{
  public:
    void x() { cout << "class C, function x" << endl;}
    void y() { cout << "class C, function y" << endl;}
};
int main(void)
{
  A * m = new B();
  A * n = new C();
  B * o = new C();

  m->x();// class A, function x
  m->y();// class B, function y
  n->x();// class A, function x
  n->y();// class C, function y
  o->x();// class C, function x
  o->y();// class C, function y

}






