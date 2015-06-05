#include<iostream>

using namespace std;

typedef void (*funptr)();

void dosomething()
{
	cout << "do something" << endl;
}

int main()
{
	(*funptr) = dosomething;
}
