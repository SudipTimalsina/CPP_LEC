#include<iostream>
using namespace std;

class base 
{
    public :
    base()
    {
        cout <<"The constructor of base class is called"<<endl;
    }
    virtual void display()
    {
        cout <<"virtual display"<<endl;
    }
    virtual ~base() //it is made virtual so that it can call the destructor of derive class also as it wont call in 
    {               //the derive class as it wont see the type 
        cout<<"This is the distructior from base class"<<endl;
    }
};
class derived : public base
{
public :
derived()
{
    cout <<"The constructor of derived class is called"<<endl;
}
~derived(){
    cout<<"This is the distructor from derived class"<<endl;
}
};
int main()
{
    base *b;
    b=new derived;
    b->display();
    delete b;        //to remove the dynamically allocated address location
    return 0;
}