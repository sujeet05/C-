#include<iostream>

using namespace std;

class Pstring
{
   public :
	Pstring(const char *str){data = new char[strlen(str)+1];strcpy(data,str);}
	operator char*()const {return data;}// Incorrect implementation ,correct implementation is below 
	//operator const char*()const {return data;}

	char &operator[](int index)const{cout << "check..." ;return data[index];}
   private:
    char * data;
};
int main()
{
  const Pstring s("Hello world");
  Pstring& AlsoS = const_cast<Pstring&>(s);
  std::cout << AlsoS << std::endl;
  AlsoS ="sujeet";
  
  std::cout << AlsoS << std::endl;
  char *modify = s;
  strcpy(modify,"New Hello world");
  std::cout << s << std::endl;

  Pstring ps("I am boy");
  ps[3] ='k';
  cout << ps;
}
