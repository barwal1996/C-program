#include<iostream>
using namespace std;
class Test
{
private:
    int count;
public:
    Test():
        count(5) { }
        void operator++()
        {
            count=count+1;

        }
        void disp()
        {
            cout<<"Count is  "<<count<<endl;
        }
};
int main()
{
    Test a1;
    ++a1;
    a1.disp();
    return 0;
}
