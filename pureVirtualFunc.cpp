/*we can override the pure virtual function of the base class in the derived class. If you fail the override it, the derived class will
 become an abstract class as well */
#include<iostream>
using namespace std;
class shape
{
protected:
    int l;
public:
    void getData()
    {
        cin>>l;
    }
     virtual float areaCalc() =0;
};
class square : public shape
{
public:
    float areaCalc()
    {
        return (l*l);
    }
};

class circle : public shape
{
public:
    float areaCalc()
    {
        return (3.14*l*l);
    }
};

int main()
{
    square s;
    circle c;

    cout<<"Enter length to calculate the area of circle \n";
    c.getData();
    cout<<" Circle area is  "<<c.areaCalc()<<endl;

    cout<<" \nEnter length to calculate area of square ";
    s.getData();
    cout<<" Square area is  "<<s.areaCalc();

    return 0;
}

