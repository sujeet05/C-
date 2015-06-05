#include<iostream>

using namespace std;

class Base1
{
  public : 
	void doIt(){std::cout <<" Function Base1::doit called" << std::endl;}
};
class Base3
{
  private :
        void doIt(){std::cout <<" Function Base3::doit called" << std::endl;}
};
class Base2
{
  public : 
	int doIt(){std::cout <<" Function Base2::doit called" << std::endl;return 0;}
};
class Derive1 :public Base1,public Base2
{
  public :
//	int doIt(){std::cout <<"Function Derive1::doit called" << std::endl;return 0;}
	
};
class Derive3 :public Base1,public Base3
{
  public :
//	int doIt(){std::cout <<"Function Derive3::doit called" << std::endl;return 0;}
	
};
class Derive2 :public Base1,public Base2
{
  public :
	int doIt(){std::cout <<"Function Derive2::doit called" << std::endl;return 0;}
	
};
int main()
{
  // case 1  member found by ambiguous name lookup
  		 Derive1 d; 
 //case 2 once derive class has defined than its final ..removed the ambiguity
  		   Derive2 d;
  		   // d.doIt();
  // case 3  “changing the accessibility of a class member should never change the meaning of a program” Error is same
		  Derive3 d;
		   d.doIt();
}
