#include<iostream>

using namespace std;

class Base
{
   public :
	virtual void fun()const {std::cout << "Base fn called" << std::endl;}
};
class Derive : public Base 
{
  public:
	
	virtual void fun()const {std::cout << "Derive->base fn called" << std::endl;}
	virtual void fun() {std::cout << "Derive fn called" << std::endl;}
};
int main()
{
   Base *base = new Derive;
	base->fun();
    Derive d;
	d.fun();
    Base *b =&d;
	b->fun();   
   return 0;
}

