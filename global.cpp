#include<iostream>
using namespace std;
int c=1;
void test();
int main()
{
    ++c;// value is increment to 2.
    cout<<"value of c is \n"<<c;

    test();
    return 0;
}
void test()
{
    c=10;
    cout<<"\nso the value of c is " <<c;
}
