#include<iostream>
#include<string>

using namespace std;

template<class T>
class NamedObject
{
   public:
	NamedObject(string &name,const T& value):namevalue(name),ObjectValue(value){}
   private:
	string& namevalue;
	const T ObjectValue;
};

int main()
{
  string newdog("persephone");
  string olddog("satch");

  NamedObject<int> p(newdog,2);
  NamedObject<int> s(olddog,29);

  p = s; // this line will throw compilation error 
  return 0;
}
