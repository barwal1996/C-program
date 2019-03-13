//C++ Program to store GPA of n number of students and display it where n is the number of students entered by user.
#include<iostream>
using namespace std;
int main()
{

    int num;
    cout<<"Enter number of students "<<endl;
    cin>>num;
    float *p;
    p= new float[num];

    cout<<"Enter GPA of students "<<endl;

    for(int i=0;i<num;i++)
    {
        cout<<" student "<< i+1 <<" GPA is "<<endl;
        cin>>*(p+i);
    }

    cout<<"Displaying GPA of students "<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<"Student "<<i+1<<" GPA is "<<*(p+i)<<endl;
    }
    delete [] p;
    return 0;
}
