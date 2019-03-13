//wap to find largest number among 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"enter the numbers "<<endl;
    cin>>n1>>n2>>n3;
     //if conditions

      if(n1>n2&&n1>n3)
      {
          cout<<"greatest number is  "<<n1<<endl;

      }
      if(n2>n1&&n2>n3)
      {
          cout<<"greatest number is "<<n2<<endl;

      }
      if(n3>n1&&n3>n2)
      {
          cout<<"greatest number is "<<n3<<endl;

      }
      return 0;
}
