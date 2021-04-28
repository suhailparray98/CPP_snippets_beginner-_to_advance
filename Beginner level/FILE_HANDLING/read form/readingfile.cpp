#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line();
    ifstream Myfile("sap.txt");
    while ( getline(Myfile,line))
    {
        cout<<line<<'\n';
    }
    myfile.close();
}
