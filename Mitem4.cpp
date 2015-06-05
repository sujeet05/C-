#include<iostream>

using namespace std;

class student
{
   public:
   student(int rollno);
   int getrollno(){return _rollno;}
  private:
	int _rollno;
};
student::student(int rollno):_rollno(rollno){}


/*
int main()
{
   int rollno[5] ={1,2,3,4,5};
   student *studentobj[10];
   for(int i =0;i<5;i++)
    studentobj[i] = new student(rollno[i]);
   for(int i=0;i <5;i++)
    std::cout << studentobj[i]->getrollno() << std::endl;
   return 0;
}*/

typedef student* PS;

int main()
{
   int rollno[5] ={1,2,3,4,5};
   PS *_ps = new PS[5];
   for(int i =0;i<5;i++)
   _ps[i] = new student(rollno[i]); 
   for(int i=0;i <5;i++)
    std::cout << _ps[i]->getrollno() << std::endl;
   return 0;
return 0;
}
