// passptr.cpp
// arguments passed by pointer
/*#include <iostream>
using namespace std;
int main()
{
double *;
void centimize(double*); //prototype
double var = 10.0; //var has value of 10 inches
cout << "var = "  << var << " inches "<< endl;
centimize(&var); //change var to centimeters
cout << "var =  "<< var << " centimeters" << endl;
return 0;
}*/
#include<iostream>
using namespace std;
void centimize(double&);
int main()
{
 double var=10;
 cout<<"var="<<var<<"inches"<<endl;
 centimize(var);
 cout<<"var="<<var<<"centimeters"<<endl;
 return 0;
}
void centimize(double& v)
{
  v *=2.54;
}
