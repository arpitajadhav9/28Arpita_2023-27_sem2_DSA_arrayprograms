//to check that in equation {A+(B+C)} has proper opening and closing of parantheses and bracket
//And if it does have proper paratheses and bracket it is a valid equation.
// Parentheses Checker using Stack:

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin >> n;
    char stack[n],list[n],top=-1;
    for (int i=0;i<n;i++)
    {

        cout<<"Enter "<<i+1<<" element: ";
        cin >> list[i];
        top++;
        stack[top]=list[i];
    }
      cout<<"List: ";
    for (int i=0;i<n;i++)
    {
        cout<<list[i]<<" ";
    }
    cout<<endl;
    for (int i=0;i<n;i++)
    {
        list[i]=stack[top];
        top--;
    }
    cout<<"Reversed list: ";
    for (int i=0;i<n;i++)
    {
        cout<<list[i]<<" ";
    }
    cout<<endl;
    return 0;


}

