#include<iostream>
using namespace std;

void insertatbeg(int arr[] , int size , int element)
{

    for(int i = size-1 ; i>=0 ; i--)
    {
        arr[i+1] = arr[i];

    }

    size+=1;
    arr[0] = element;
    for(int i=0 ; i<size;i++)
    {
        cout<<arr[i]<<" ,";
    }
}


void insertatindex(int arr[] , int size , int pos , int element)
{
    for(int i=size-1;i>=pos;i--)
    {
        arr[i+1] = arr[i];

    }
    
    size+=1;
    arr[pos]=element;
    for(int i = 0; i<size ; i++)
    {
        cout<<arr[i]<<" ,";
    }
}

void deletion(int arr[] , int size , int pos )
{
    for(int i=size-1;i>=pos;i--)
    {
        arr[i]=arr[i+1];
    }
    size+=1;
    

}

int main()
{
    int arr[10];
    int n;
    cout<<"Enter th number of elements you want in an array( size of array): ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    
    for(int i =0; i<n ; i++)
    {
        cin>>arr[i];

    }

    // insertatbeg(arr,n,26);
    insertatindex(arr , n , 4 , 78);

    return 0;

}
   