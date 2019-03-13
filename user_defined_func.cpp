#include<iostream>
using namespace std;
int add(int,int);
int main()
{

int num1,num2;
cout<<"Enter two numbers : ";
cin>>num1>>num2;

int sum;
sum= add(num1,num2);

cout<<"the sum of two numbers is "<<sum;
return 0;
}
int add(int a,int b)
{
    int add;
    add=a+b;

    return add;
}
