#include<iostream>
using namespace std;

class base{
    public :
    base ()
    {
        cout <<"Printing from base constructor .........."<<endl;

    }
    ~base()
    {
        cout <<"printing from base destructor.........."<<endl;
    }
};
class derived : public base{ 
    public :
    derived()
    {
        cout <<"printing from derived constructor..............."<<endl;
    }
    ~derived ()
    {
        cout <<"Printing fom derived distructor.......... "<<endl;

    }
};
int main()
{
    derived d1;
    return 0;
}