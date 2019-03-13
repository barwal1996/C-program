//C++ Program to display address of elements of an array using both array and pointers
/* &= reference operator and * is dereference operator */

#include <iostream>
using namespace std;
int main()
{

    float *ptr;
    int i;

    float arr[5];
    cout<<"\nDisplaying address of element of an array using array  ";
    for(i=0;i<5;i++)
    {
        cout<<"&arr["<<i<<"] is = "<<&arr[i]<<endl;

    }
    ptr=arr;

    cout<<"\nDisplaying address of an element of an array using pointers ";
        for(i=0;i<5;i++)
        {
            cout<<"ptr+ "<<i<<" = "<< ptr+i<<endl;
        }
        return 0;

        }
