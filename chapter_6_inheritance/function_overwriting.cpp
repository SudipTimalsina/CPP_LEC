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
    derived d1;
    base b1;
    b1.print();
    d1.print();
    return 0;

}