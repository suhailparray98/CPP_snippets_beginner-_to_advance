#include<stdio.h>
int main()
{
    int arr[10];
    int n,temp;
    printf("enter the number of elements of array : ");
    scanf("%d",&n);
    printf("enter the elements of array : ");printf("\n arr[i]=");
  //  int arr[n];
    //printf("\n arr[i]=");
    for(int i=0;i<n;i++)
    {
     scanf("%d", &arr[i]);

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("the numbers arranged in ascending order are given below :  ");
    printf("\n arr[i]=");
    for(int i=0;i<n;i++)
    {
        printf(" ");
        printf("%d",arr[i]);
    }
    return 0;
}
