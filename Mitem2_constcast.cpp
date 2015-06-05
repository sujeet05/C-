#include<iostream>

using namespace std;

void fun(int& x)
{
	cout << ++x;
}

int main()
{
	int x=6;
	const int y=x;
	const int x2=6;
	int y2=x2;// does not give the error but it does not change the value on below lone
//	int &y3 =x2;//give error 
	y2=y2+10;
//	cout << "y2" << ".."<< x2;
	fun(const_cast<int&>(x2));// error fn needs cont
}
