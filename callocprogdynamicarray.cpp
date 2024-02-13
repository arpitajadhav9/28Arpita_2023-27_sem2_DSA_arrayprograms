// USE CALLOC FUNCTION AND FORM A DYNAMIC ARRAY
//CALLOC-> Continues allocating
#include <iostream>
using namespace std;

int main()
{
    int* arr = (int*)calloc(10,sizeof(int));
  
    int i = 0;
    for(i = 0 ; i<=10 ; i++)
    {
         *arr = 10;
    }
    cout<<*arr;

    return 0;
}