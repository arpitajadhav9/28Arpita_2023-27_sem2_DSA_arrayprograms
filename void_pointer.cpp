#include<iostream>
using namespace std;

int main()
{
    // void* ptr;
    // int a = 5;
    // ptr = &a;
    // cout<<a<<endl;
    // cout<<*(int*)ptr;

   


    void* ptr;
    char c = 'I';
    ptr = &c;
    cout<<c<<endl;
    // cout<<*ptr<<endl;
    cout<<*(char*)ptr;

}


// I
//I�k% ...these both are the output when we use char in place of void in second block of code....It shows a garbage value
