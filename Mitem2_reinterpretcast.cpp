#include<iostream>

using namespace std;

typedef void (*funptr)();

int dosomething( )
{
	int x=4;
	cout << "do something";
	return x;
}
int main()
{
///	funptr p   =&dosomething;
//	cout << p();
	funptr p2 = reinterpret_cast<funptr>(&dosomething);
	cout << p2;
	return 0;
}
