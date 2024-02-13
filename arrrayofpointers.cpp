//


#include <iostream>
using namespace std;
int main()
{
    int ary[5]={1,2,3,4,5};
    int ary1[5]={11,12,13,14,15};
    int ary2[5]={21,22,23,24,25};

    int *ptrarray[3]={ary,ary1,ary2};
    
 for(int i=0;i<3;i++)
    {
      cout<<*ptrarray[i];
    }




    return 0;

}