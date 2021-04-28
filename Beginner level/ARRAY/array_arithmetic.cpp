#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3],subtract[3],multiplication[3],division[3];
    cout<<"enter the elements of array a :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i];
        }
    }
    cout<<"enter the elements of array b:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i];
        }
    }
    cout<<"subtraction of 1-d arrays are:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           subtract[i]=a[i]-b[i];
           cout<<subtract[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}
