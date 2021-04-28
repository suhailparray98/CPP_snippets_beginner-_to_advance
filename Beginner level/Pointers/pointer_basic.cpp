#include<iostream>
using namespace std;
int main()
{
  int a = 5;
  int *ptr;
  ptr = &a;
  cout<<"the address of a is :"<<&a<<endl;
  cout<<"the address of a  through ptr is :"<<ptr<<endl;
  a = 6;
  ptr=&a;
  cout<<"the address of a is :"<<&a<<endl;
  int b=4;
  ptr=&b;
  cout<<"the address of b is :"<<&b<<endl;

  return 0;
}
