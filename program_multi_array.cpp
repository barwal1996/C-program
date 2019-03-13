//C++ Program to store temperature of two different cities for a week and display it
#include<iostream>
using namespace std;
const int city=2;
const int week =7;
int main()
{
    int temp[city][week];
    cout<<"\nEnter all temperature of city and week : ";

    for(int i=0;i<city;i++)
    {
        for(int j=0;j<week;j++)
        {
            cout<<"city "<<i+1 <<", Day "<<j+1  << " : ";
            cin>>temp[i][j];
        }
    }
    for(int i=0;i<city;i++)
    {
        for(int j=0;j<week;j++)
        {
            cout<<"\ncity "<<i+1 <<", Day "<<j+1  << " : "<<temp[i][j];
        }
    }
    return 0;
}
