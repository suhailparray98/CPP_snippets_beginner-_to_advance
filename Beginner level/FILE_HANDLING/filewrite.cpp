#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char arr[100];
    int age;
    cout<<"enter the name and age"<<endl;
    cin.getline(arr,100);

    ofstream myfile("sap.txt");
   // myfile.open("sap.txt");
    myfile<<arr;
    myfile.close();



    //file read operation
    cout<<"file read operation starts :"<<endl;
    ifstream obj("sap.txt");
    obj.getline(arr,100);
    obj.open("sap.txt");

    cout<<"file write successfully "<<endl<<endl;
}
