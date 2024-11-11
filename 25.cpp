// wap a program to interchnage the largest and smallest element of an array

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0],max_index=0,min_index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            max_index=i;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            min_index=i;
        }
    }
    int temp=arr[max_index];
    arr[max_index]=arr[min_index];
    arr[min_index]=temp;
    cout<<"The array after interchanging the largest and smallest element is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}