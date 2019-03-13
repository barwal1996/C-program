#include<iostream>
using namespace std;
void test(int);
int main()
{
    int var;//local var defined inside a main() func.
    cout<<"enter a variable ";
    cin>>var;

    test();
    var1=9; //illegal variable defined inside a main() func.
    return 0;
}
void test(int var1)
{
    int a=10;
    cout<<"print a "<<a;

    cout<<var; //var is defined inside a main() func which is a local var so it cant be accesed from outside the function /

}
