#include<iostream>
using namespace std;
void temp(char = '#',int=5);
int main()
{
    cout<<"No argument is passed ";
    temp();

    cout<<"\nfirst argument is passed";
    temp('*');

    cout<<"\nSecond argument is passed ";
    temp(4);

    cout<<"\nAll arguments is passed ";
    temp('%',9);

   return 0;
}
void temp(char c,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<"\nThe character is "<<c;
    }
}
