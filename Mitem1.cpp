#include<iostream>


using namespace std;

int main()
{
	int d=10;
	int e =12;
	int &c =d ;// reference need initialization 
	cout << c <<endl;
	d =11;
	cout << c <<endl;
	c= e;// c will still have alias of d however c value is assigned e value 
	cout << c <<endl;
	cout << d <<endl;
	c =13;
	cout << c <<endl;
	cout << d <<endl;
	cout << e <<endl;// e will be remain unchanged 
}
