#include<iostream>
using namespace std;
void display(char *);
void display(string);
int main()
{
    string str1;
    char str2[100];
    cout<<"\nEnter string 1 ";
    getline(cin,str1);

    cout<<"\nEnter another string ";
    cin.get(str2,100,'\n');

    display(str1);
    display(str2);

    return 0;

}
void display(char s[])
{
    cout<<"\nEntered char array is "<<s<<endl;


}
void display(string p)
{
    cout<<"\nAnother string you entered is : "<<p<<endl;
}

