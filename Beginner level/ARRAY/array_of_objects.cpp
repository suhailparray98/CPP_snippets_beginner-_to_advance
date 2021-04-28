#include<iostream>
using namespace std;
class Employee
{
char name[30]; // string as class member
float age;
public:
void getdata(void)
{
cout << "Enter name: ";
cin >> name;
cout << "Enter age: ";
cin >> age;
}
void putdata(void)
{
cout<< "Name: " <<name<<endl;
cout<<"Age: " <<age<<endl;
}
};
const int size=3;
int main()
{
 Employee manager[size];
for(int i=0;i<size;i++)
{
    cout<<"details of the manager "<<i+1<<endl;
    manager[i].getdata();
}
cout<<endl;
for(int i=0;i<size;i++)
{
    cout<<endl<<"manager "<<i+1<<endl;
    manager[i].putdata();
}
return 0;
}
