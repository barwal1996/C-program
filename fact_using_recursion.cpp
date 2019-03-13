#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    int n;
    cout<<"\nenter a number jiska fact chaiye apko : ";
    cin>>n;


    cout << "Factorial of " << n <<" = " << factorial(n);
    return 0;

}
int factorial(int n)
{

    if(n>1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}
