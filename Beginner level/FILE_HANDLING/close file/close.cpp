/*if u have finish worked with the file so close it with the file */
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile;
    myfile.open("close_file.txt");
    myfile<<"sap is good also in c++ programming "<<endl;
    myfile.close();
}
