//WRITE A C++ PROGRAM TO READ DISPLAY (n) NUMBERS (n ka value user se) AND FIND MEAN OF(n)NUMBERS USING AN ARRAY.

#include <iostream>
using namespace std;

int main()
{
    int n,mean,sum=0;
    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    mean = sum / n;
    cout<<"mean of array is:"<<mean;

}


//USING WHILE LOOP
#include <iostream>
using namespace std;
int main()
{
    int n, mean, sum = 0;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    
    int i = 0;
    while (i < n) 
    {
        cin >> arr[i];
        sum += arr[i];
        i++;
    }

    mean = sum / n;
    cout << "Mean of elements in array is: " << mean;

    return 0;
}