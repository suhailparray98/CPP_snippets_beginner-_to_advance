#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        sum += arr[i];
    }
    cout<<"sum of array elements:"<<sum<<endl;

return 0;
}
