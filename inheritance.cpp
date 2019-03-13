//Create game characters using the concept of inheritance.
#include<iostream>
using namespace std;
class person
{
public:
    string profession;
    int age;

    person(): profession("unemployed"),age(21){ }
    void display()
    {
        cout<<"Profession is "<<profession<<endl;
        cout<<"Age is "<<age<<endl;
    }
    void talk();
    void walk();
};
class MathsTeacher : public person
{
public:
    void teaches()
    {
        cout<<"I can teach math "<<endl;
    }
};

class Footballer : public person
{
public:
    void PlayFootball()
    {
        cout<<"I can play football "<<endl;
    }
};

int main()
{
    MathsTeacher t;
    t.profession= "Teacher";
    t.age=30;
    t.display();
    t.teaches();

    Footballer f;
    f.profession =" footBaller";
    f.age=24;
    f.display();
    f.PlayFootball();
    return 0;

}
