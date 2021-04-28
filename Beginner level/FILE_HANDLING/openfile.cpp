/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile;
    myfile.open("my_new_file.txt");
    myfile<<"sap is a good programmer "<<endl;
}*/



#include<iostream>>
#include<fstream>
using namespace std;
int main()
{
    fstream myfile;
    myfile.open("crazy_programmer.txt");
    string name ;
    float salary;
    cout<<"enter the name of crazy programmer "<<endl;
    cout<<"press ctrl+z to quit\n"<<endl;
    cin>>name;
    cout<<"enter salary"<<endl;
    cin>>salary;
    while(cin>>name>>salary)
    {
        myfile<<name<<','<<salary<<','<<endl;
    }

}
