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
	//B * b = new A();//error: invalid conversion from ‘A*’ to ‘B*’
	a->foo();       // 在这里，a虽然是指向A的指针，但是被调用的函数(foo)却是B的!

}
