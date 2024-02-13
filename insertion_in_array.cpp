// inserting one element in an array . size of array is taken from user. 

#include<iostream>
using namespace std;

void insertAt0(int *arr,int n,int element){

}

int main()
{
   int n ;
   int arr[n];

   cout<<"Enter array size: ";
   cin>>n;

   for(int i = 0 ; i < n ; i--)
   {
    cin >> arr[i];
   }

   int 
   cout<<"Enter element:";
   cin>

}


// #include <iostream>

// using namespace std;

// void insertAtBeginning(int*& arr, int& size, int element) {
//     int* newArray = new int[size + 1];

//     for (int i = 0; i < size; ++i) {
//         newArray[i + 1] = arr[i];
//     }

//     newArray[0] = element;
//     size++;

//     delete[] arr;
//     arr = newArray;
// }

// int main() {
//     int* arr = nullptr;
//     int size = 0;

//     insertAtBeginning(arr, size, 5);
//     insertAtBeginning(arr, size, 2);
//     insertAtBeginning(arr, size, 8);
//     insertAtBeginning(arr, size, 1);
//     insertAtBeginning(arr, size, 7);

//     cout << "Elements in the array: ";
//     for (int i = 0; i < size; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     delete[] arr;

//     return 0;
// }