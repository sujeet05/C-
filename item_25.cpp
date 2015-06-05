#include<iostream>

// instead of NULL , in this program FULL is used as NULL is already defined in stddef.h 

using namespace std;

void f(int x){std::cout << "f(int x) is called" << std::endl; }
void f(string *ps){std::cout << "f(string *ps) is called" << std::endl; }

//case 1.

/*int main()
{
  f(0);
  f(static_cast<string*>(0));
  return 0;

}*/

//case 2

/*void *const FULL =0;

int main()
{
  f(0);
  f(static_cast<string*>(FULL));
  f(static_cast<string*>(0));
//  f(FULL);   // type mismatch error 
  return 0;
}*/

// case 3. 

/*#define FULL 0
#define FULL ((void*)0)

int main()
{
  f(0);
 // f(static_cast<string*>(FULL));
 // f(static_cast<string*>(0));
//  f(FULL);   // type mismatch error 
  return 0;
}*/

// case 4
/*#define FULL 0L

int main()
{
f(FULL);

return 0;
}*/












