/* A C++ program to ask the user to enter the values of the array and represent the array in matrix form */
#include<iostream>  //including standard input and output header file 
using namespace std; // including standard namespace 
int main() //main function starts 
{
    int myarray[2][2];//intializing 2*2 matrix representing its storage location as myarray
    cout<<"enter the elements of 2*2 matrix :";
    for(int i=0;i<2;i++)//logical hand: asking user to enter the values of the matrix 
    {
        for(int j=0;j<2;j++)
        {
           cin>>myarray[i][j];
        }
    }
     cout<<"values of 2*2 matrix are :"<<endl;
     for(int i=0;i<2;i++) //logical hand: displaying the values of the array in matrix form 
    {
        for(int j=0;j<2;j++)
        {
           cout<<myarray[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//the program is wrtten by suhail iqbal parray 