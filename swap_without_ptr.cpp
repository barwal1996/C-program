#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
    int a,b;
    a=1;b=2;

    cout<<"\nBefore Swapping  "<<endl;

    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;

    swap(a,b);
    cout<<"After Swapping "<<endl;
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;

    return 0;
}
void swap(int &m,int &n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;

}
