#include <stdio.h>
#include <iostream>
using namespace std;

class A
{
	public:
  	virtual void foo() { cout << "A::foo() is called" << endl;}
};

class B: public A
{
	public:
    virtual void foo() { cout << "B::foo() is called" << endl;}
};


int main(void)
{
	A * a = new B();
	a->foo();       // �����a��Ȼ��ָ��A��ָ�룬���Ǳ����õĺ���(foo)ȴ��B��!

}
