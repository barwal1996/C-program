#include <iostream>
using namespace std;

class Area
{
    private:
       int length;
       int breadth;

    public:
       // Constructor with no argument
       Area(): length(5), breadth(2){ }

       Area(int l, int b): length(10), breadth(2) { } // constructor with 2 argument

       void GetLength()
       {
           cout << "Enter length and breadth respectively: ";
           cin >> length >> breadth;
       }

       int AreaCalculation() {  return (length * breadth);  }

       void DisplayArea(int temp)
       {
           cout << "Area: " << temp;
       }
};

int main()
{
    Area a1, a2(2,1);
    int temp;
    a1.GetLength();
    temp= a1.AreaCalculation();

    a1.DisplayArea(temp);
cout << endl << "Default Area when value is not taken from user" << endl;
    a2.GetLength();
    temp=a2.AreaCalculation();
    a2.DisplayArea(temp);

    return 0;
}

