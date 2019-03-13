//C++ program to store and calculate the sum of 5 numbers entered by the user using arrays.
#include<iostream>
using namespace std;
int main()
{
    int a[5],sum=0,i;
    cout<<"\nEnter numbers to store :";

    for(i=1;i<5;i++)
    {
        cin>>a[i];

        sum+=a[i];
    }
    cout<<"Sum of numbers is "<<sum;
    return 0;
}
