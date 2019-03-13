#include<iostream>
using namespace std;
class Distance
{
private:
    int meter;
public:
    Distance(): meter(0){ }
     friend int add(Distance);


};
int add(Distance d)
{
    d.meter+=5;
    return d.meter;

}
int main()
{
    Distance D;
    cout<<" Distance is : "<<add(D);
    return 0;
}
