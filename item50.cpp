#include<iostream>

using namespace std;

class Base
{
  public:
     virtual void f(int x){cout << "Base:" << endl;}
};
class Derive: public Base
{
  public:
     virtual void f(double pd){cout << "Derive:" << endl;}
};
int main()
{
  Derive *pd = new Derive;
	pd->f(10);
  return 0;
}
