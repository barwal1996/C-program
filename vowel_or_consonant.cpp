#include<iostream>
using namespace std;
int main()
{
/*Factorial of a program
int i,fact=1,n;
cout<<"Enter number";
cin>>n;

for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"Factorial of "<<n<< "is "<<fact;

*/
    char c;
    cout<<"Enter any character: ";
    cin>>c;

    int isLowercaseVowel,isUppercaseVowel;

    isLowercaseVowel= (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if(isLowercaseVowel||isUppercaseVowel)
    {
        cout<<"Character is vowel"<<c;
    }
    else
        cout<<"Character is consonant"<<c;
return 0;
}
