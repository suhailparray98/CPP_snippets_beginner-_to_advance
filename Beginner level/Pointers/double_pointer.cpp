#include<iostream>
using namespace std;
int main()
{
    int i = 58,*ptr,**ptrl;
    ptr=&i;
    ptrl=&ptr;
    cout<<"value of i:"<<i<<endl;
    cout<<"memory address of i :"<<&i<<endl;
    cout<<"p:"<<*ptr<<endl;
    cout<<"memory address of i through *ptr :"<<ptr<<endl;
    cout<<"q:"<<**ptrl<<endl;
    cout<<"memory address of i through **ptrl :"<<&i<<endl;

    /*int ***ptrlr;
    cout<<"r:"<<***ptrlr<<endl;*/
    return 0;
}
