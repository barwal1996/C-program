#include<iostream>
using namespace std;
class weapon
{
public:
    virtual void features()
    {
        cout<<" Loading weapon features ";
    }
};
class Bomb: public weapon
{
public :
    void features()
    {
        this ->weapon :: features();
        cout<<" Loading bomb features \n";
    }
};

class Gun :public weapon
{
    void features()
    {
        this->weapon :: features();
        cout<<" Loading Gun Features \n";
    }
};

class loader
{
public:
    loadFeatures(weapon *weapon)
    {

        weapon->features();
    }
};

int main()
{
    loader *l= new loader;
    weapon *w;
    Bomb b;
    Gun g;

    w= &b;
    l->loadFeatures(w);

        w= &g;
    l->loadFeatures(w);
    return 0;
}
