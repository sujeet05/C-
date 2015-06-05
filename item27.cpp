#include<iostream>

using namespace std;

int main()
{

  double values1[3];
  double values2[3];
  values1 = values2;
  for(int i =0;i<3;i++){std::cout << values1[i]<< "..";}
  std::cout << std::endl;
  for(int i =0;i<3;i++){std::cout << values2[i]<< "..";}
  return 0;
}
