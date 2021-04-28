#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream sapsfile("");
    sapsfile<<"soub will eb one of the best programmers of the universe "<<endl;
    if(sapsfile.is_open())
    {
        cout<<"file is opened successfully"<<endl;
    }
    else
    {
        cout<<"there is a problem associated with the file opening "<<endl;
    }
}
