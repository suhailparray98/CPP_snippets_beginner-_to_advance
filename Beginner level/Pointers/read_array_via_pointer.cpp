// ptrnote.cpp
// array accessed with pointer notation
#include <iostream>
using namespace std;
int main()
{ //array
int intarray[5] = { 31, 54, 77, 52, 93 };
cout << "intarray[5]=";
for(int i=0; i<5; i++) //for each element,
{
 cout <<*(intarray+i)<<" "; //print value

}
return 0;
}
