#include<iostream>

using namespace std;

class Base
{
	public:
		Base(int _x,int _z);
		Base(const Base& b);
		Base &operator =(const Base& rhs);
		void getvalue(){cout << x << ".." << z << endl;}
	private:
		int x;
		int z;
};
Base::Base(int _x,int _z):x(_x),z(_z)
{
	cout << x << ".."<< z << endl;
}
Base::Base(const Base& b)
{
	x=b.x;
	z=b.z;
}
Base& Base::operator=(const Base& rhs)
{
	if(this==&rhs) return *this;
	x= rhs.x;
	z =rhs.z;
	return *this;
}
class Derive:public Base
{
	public:
		Derive(int _x,int _y,int _z);
		Derive(const Derive& d);
		Derive &operator =(const Derive& rhs);
		void getvalue(){cout << y << endl;}
	private:
		int y;
};
Derive::Derive(const Derive& d):Base(d),y(d.y)
{
    cout << "copy ctr called" << endl;
}
Derive::Derive(int _x,int _z,int _y):Base(_x,_z),y(_y)
{

	cout << y << endl;
}

Derive& Derive::operator=(const Derive& rhs)
{
	if(this==&rhs) return *this;
	static_cast<Base&>(*this)= rhs;
	y= rhs.y;
	return *this;
}
int main()
{
	Derive d(10,20,30);
	Derive d1(40,50,60);
//    d.getvalue(); 
//	d1.getvalue();
	d1= d;
	cout << "after assignment"<< endl;
	static_cast<Base>(d1).getvalue();
	d1.getvalue();
	return 0;
}
