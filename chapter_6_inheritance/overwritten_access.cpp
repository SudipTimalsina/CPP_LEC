#include<iostream>
using namespace std;

class base{
    public :
    void print()
    {
        cout <<"Printing from base .........."<<endl;

    }
};
class derived : public base{ 
    public :
    void print()
    {
        cout <<"printing from derived..............."<<endl;
    }
};
int main()
{
    derived d1,d2;
    
    d1.print();
    d2.base ::print();
    return 0;

}