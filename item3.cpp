#include<iostream>
#include<string>

using namespace std;
class str
{
	public:
	str(){};
	~str(){ cout << "dtr called" << endl;}
};

int main()
{
	str* s = new str;
	delete s;
	str *p  = new str[5];
	delete []p;
}
