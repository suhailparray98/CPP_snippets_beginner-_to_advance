#include<iostream>
#include<fstream>
using namespace std;
int get_whattheywant()
{
    int choice ;
    cin>>choice;
    cout<<"enter 1 - plain items "<<endl;
    cout<<"enter 2 - helpful items  "<<endl;
    cout<<"enter 3 - harmful items  "<<endl;
    cout<<"enter 4 - quit program "<<endl;
    return choice;
}
int main()
{
    int whattheywant;
    whattheywant = get_whattheywant();
    while(whattheywant != 4)
    {
            whattheywant = get_whattheywant();

    }

}

