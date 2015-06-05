#include<iostream>
#include<cassert>

//#define NDEBUG

using namespace std;

int main()
{
	assert(2+2==4);
			cout << "pass" << endl;
	assert(2+2==5);
			cout << "failed" << endl;
	return 0;
}
