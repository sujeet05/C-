#include<iostream>
#include<new>

using namespace std;
void no_memory_available()
{
	cout << "Release memory no more memory is available"<< endl;
	abort();
}
int main()
{
	set_new_handler(no_memory_available);
	set_new_handler(NULL);
	try{
	int *p = new int[100000000000000];
	}
	catch(bad_alloc e)
	{
		cout << "Exception thrown" << e.what() << endl;;
	}
	return 0;
}
