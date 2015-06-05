#include<iostream>
#include<new>

using namespace std;

class Base
{
	public:
			static void* operator new(size_t size);
			static void operator delete(void * raw, size_t size);
};
void* Base::operator new(size_t size)
{
	if(size!= sizeof(Base))
		return	::operator new(size);
	// allocate tje memory and return

}
void Base::operator delete(void * raw,size_t size)
{
	if(size ==0)
			return;
	if(size != sizeof(Base))
	{
		::operator delete(raw);
		return;
	}
	// dellocate the memory

}
int main()
{
	Base b;
	return 0;
}
