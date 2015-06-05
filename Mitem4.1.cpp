#include<iostream>

using namespace std;

class Branch
{
	public:
			Branch(int _id);
			int getid();
			~Branch();
	private:
		int id;
};
Branch::~Branch()
{
	cout << "dtr called" << endl;
}
Branch::Branch(int _id):id(_id){}
int Branch::getid()
{
	return id;
}
typedef Branch*  brptr;
int main()
{
	int id[] ={11,22,33,44,55};
	Branch* _branch[5];
	for(int i=0;i<5;i++)
		_branch[i]=new Branch(id[i]);
	for(int i=0;i<5;i++){
		cout << _branch[i]->getid()  << "...";
	delete _branch[i];}
    //brptr* br = new brptr[5];
    brptr* br = new brptr[5];
	for(int i=0;i<5;i++)
		 br[i] = new Branch(id[i]);
	for(int i=0;i<5;i++){
		cout << br[i]->getid()  << "...";
	delete  br[i];}
	return 0;
}
