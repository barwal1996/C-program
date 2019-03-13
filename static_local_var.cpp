#include<iostream>
using namespace std;
void test()
{
    static int var= 0;
    ++var;

    cout<<"\nvalue of var is : "<<var;

}
int main()
{
     test();
     test();
    return 0;

}
