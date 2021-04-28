#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile("fsap.txt");
    if(myfile.is_open())
    {
        myfile<<"this is awesome"<<endl;
    }
    else{
        cout<<"something went wrong"<<endl;
    }
    myfile.close();
    }
