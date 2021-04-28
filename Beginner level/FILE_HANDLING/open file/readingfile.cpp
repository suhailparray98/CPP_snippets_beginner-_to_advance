#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line();
    ifstream Myfile("suhail.txt");
    while ( getline(Myfile,line))
    {
        cout<<line<<'\n';
    }
    myfile.close();
}
