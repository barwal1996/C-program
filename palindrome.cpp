#include<iostream>
using namespace std;
int main()
{
    int n,num,digit,rev=0;
    cout<<"enter given number ";
    cin>>num;
     n=num;

    do{
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    while(num!=0);
        cout<<"the number is in reverse order "<<rev<<endl;
    if(n==rev)
    {
        cout<<" given number is  palindrome ";

    }
    else
        cout<<"given number is not palindrome";
    return 0;

}
