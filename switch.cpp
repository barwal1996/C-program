#include<iostream>
using namespace std;
int main()
{
    char n;
    int num1,num2;

    cout<<"Enter an operator (+,-,*,/) ";
    cin>>n;

    cout<<"Enter two operands ";
    cin>>num1>>num2;


    switch(n)
    {
    case '+':
        cout<<num1<<" + "<<num2<<"is "<<num1+num2;
        break;
    case '-':
        cout<<num1<<" - "<<num2<< "is "<<num1 - num2;
        break;
    case '*':
        cout<<num1<<" * "<<num2<<" is "<<num1*num2;
        break;
    case '/':
        cout<<num1<<"/"<<num2<<" is"<<num1/num2;
        break;
    default:
        cout<<"No operators worked here . Kindly fuck off!! ";

    }
    return 0;
}
