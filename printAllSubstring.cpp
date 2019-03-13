// C++ program to print all possible  substrings of a given string
#include<iostream>
using namespace std;

void subString(string s , int n)
{
    for(int i=0;i<n;i++)
        for(int len = 1;len<=n-1;len++)
            cout<<s.substr(i,len)<<endl;
}
int  main()
{
    string s="abcd";
    subString(s,s.length());
    return 0;
}
