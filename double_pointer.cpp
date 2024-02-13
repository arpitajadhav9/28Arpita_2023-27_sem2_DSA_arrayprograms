#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr1;
    ptr1 = &a;
    int **ptr2;
    ptr2 = &ptr1;

    cout<<*ptr1
}
//*ptr1 ------> 5
//*ptr2 ------->#800g
//**ptr2 ------->5