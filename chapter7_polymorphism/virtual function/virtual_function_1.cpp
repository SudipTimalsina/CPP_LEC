#include<iostream>
using namespace std;

class animal
{public :
    virtual void move()=0; //pure virtual function
    // virtual void display(){cout<<"lol";}
};
class dog : public animal{
    public :
        void move()
        {
            cout <<"dog runs"<<endl;
        }
        void eat(){cout<<"hi";}
};
int main()
{
    animal *an;
    dog dg;
an=&dg;
an->move();
dg.eat();

}