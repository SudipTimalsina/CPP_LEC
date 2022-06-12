// ambugity in member access
#include<iostream>
using namespace std;

class baseone{
    public :
        void display()
        {cout <<"I am from BaseOne"<<endl;}
};
class basetwo{
    public :
        void display()
        {cout <<"I am from Base two"<<endl;}
};
class derived : public baseone ,public basetwo{
    public :
        void drvdisplay()
        {
            display(); //error ambigious,which display to call
            baseone ::display(); //diaplay from base 1 is called 
            basetwo ::display(); //diaplay from base 2 is called 
        }
};
int main()
{
    derived der;
    der.display(); //error ambigious,which display to call
    der.baseone ::display(); //diaplay from base 1 is called 
    der.basetwo ::display(); //diaplay from base 2 is called
    return 0;
}