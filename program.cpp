//ARRAY MAIN PROPERTY VALUS HAI .THEN MAKE A FUCNTION THEN TRAVERSE THRU THE ARRAY AND SEARCH THE SMALLEST VALUE AND THEN THE LARGEST VALUE AND THEN SWAP THEM WITH EACH OTHER USING INDEX NUMBER.


#include <iostream>

using namespace std;

void arr_element(int arr[], int index1, int index2) {
    int r = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = r;
}

void swapSmallestToLargest(int arr[], int size) {
    int smallestIndex = 0;
    int largestIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }

        if (arr[i] > arr[largestIndex]) {
            largestIndex = i;
        }
    }

    arr_element(arr, smallestIndex, largestIndex);

    cout << "Array after swapping smaller number to the position of the larger number: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array (separated by spaces): ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    swapSmallestToLargest(arr, size);

    return 0;
}




