/*
Example 1: Passing One-dimensional Array to a Function

C++ Program to display marks of 5 students by passing one-dimensional array to a function.
 */

 #include<iostream>
 using namespace std;
 void disp(int marks[5]);
 int main()
 {
     int marks[5]={67,42,77,58,49};
     disp(marks);
     return 0;
 }
 void disp(int m[5])
 {
     cout<<"\n Displaying marks ";
     for(int i=0;i<5;i++)
     {
         cout<<"\nStudent "<<i+1 <<" marks is "<<m[i];
     }
 }
