// need of virtual function is illustrated here
#include<iostream>
using namespace std;
class animal
{
    public :
        void diaplay()
        {
            cout<<"\nFrom base class animal";
        }
};
class cow : public animal
{
    public :
        void diaplay(){cout <<"\nFrom derived class cow";}
};
class dog : public animal{
    public :
    void display(){cout <<"\nFrom derived class Dog";}
};
int main()
{
    animal *panm; //pointer to base class
    animal anm;
    cow cw;
    dog dg;

    panm=&anm;
    panm->diaplay();

    panm=&cw;
    panm->diaplay();

    panm=&dg;
    panm->diaplay();
    return 0;
}