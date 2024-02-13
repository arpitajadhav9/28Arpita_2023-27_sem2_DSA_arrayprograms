#include<iostream>
using namespace std;

// int main()
// {
//     int a = 5;
//     int *ptr;
//     ptr = &a;



//     cout<<a<<endl;  // output is the the value of the variable 
//     cout<<*ptr<<endl; // output is the the value of the variable 
//     cout<<ptr<<endl; //output is the address of variable

//     cout<<sizeof(ptr);//output is 8.
// }

//memory address always changes when we run the code .


//-----------------------------------------------------------

//ADDITON AND SUBTRACTION OF VALUWS USING POINTERS.
int main()
{
int a = 8;
int b = 1;

int *ptr1 = &a;
int *ptr2 = &b;
 
// int sum = (*ptr1)+(*ptr2);
// cout<<sum<<endl;



// int sub = (*ptr1)-(*ptr2);
// cout<<sub;


//TO INCREMENT THE VALUE

cout<<(*ptr1)<<endl;
(*ptr1)++; //first make the increment and then use cout to print aise hi cout kiya toh 1st time run hoga 2nd time nahi woh bas woh value store kar deta hao=i
cout<<(*ptr1)<<endl;
// cout<<a++; //INREMENT USING THE VALUES.


return 0 ;

}
