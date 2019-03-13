//C++ program to add two complex numbers by passing objects to a function.

#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imag;
public:
    Complex():
        real(0),imag(0) { }

        void readData()
        {
            cout<<"Enter real and imag data value respectively  "<<endl;
            cin>>real>>imag;
        }
        void addComplexNumber(Complex comp1, Complex comp2)
        {
            real = comp1.real+ comp2.real;
            imag = comp1.imag +comp2.imag;
        }
        void dispSum()
        {
            cout<<" Sum is : "<<real<<" + " <<imag <<" i "<<endl;

        }
};
int main()
{
    Complex c1,c2,c3;
    c1.readData();
    c2.readData();
    c3.addComplexNumber(c1,c2);
    c3.dispSum();
    return 0;

}
