#include<iostream>
using namespace std;
int main()
{
    int myarray[3][3];
    //cout<<"enter the size of 2d array"<<endl;
    cout<<"enter the elements of matrix :"<<endl;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cin>>myarray[i][j];
        }
     cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<myarray[i][j]<<" ";
        }
     cout<<endl;
    }
    int transpose[3][3];
    cout<<"transpose of a matrix is:"<<endl;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
       transpose[j][i]=myarray[i][j];
        }
     cout<<endl;
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << transpose[i][j]<<" ";
        }
     cout<<endl;
    }



return 0;
}
