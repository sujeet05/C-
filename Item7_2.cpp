#include<iostream>
#include<new>


using namespace std;

class X
{
	public:
		static void* operator new(size_t _size);
		static new_handler set_new_handler(new_handler p);
	private:
		int x;
		static new_handler current_handler;
};
void memory_error(){cout << "Error thrown memory is not sufficient" << endl;}
new_handler X::current_handler =NULL;
new_handler X::set_new_handler(new_handler p)
{
	new_handler old_handler = current_handler;
	current_handler =p;
	return old_handler;
}
void* X::operator new(size_t _size)
{
	new_handler global_handler= std::set_new_handler(current_handler);
	void *memory;
	try
	{
		memory= ::operator new(_size);
	}
	catch(std::bad_alloc)
	{
		std::set_new_handler(global_handler);
		throw;
	}
		std::set_new_handler(global_handler);
     return memory;	

}
int main()
{
	X::set_new_handler(memory_error);
	try{
	X *x = new X[100000000000000000];}
	catch(bad_alloc e)
	{
		cout << "Exception thrown :" <<e.what()<< endl;
		abort();
	}
	string *str= new string;
}
