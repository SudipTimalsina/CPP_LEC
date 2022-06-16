#include<iostream>
using namespace std;

class binary
{
    private :
    int a,b;

    public :
    binary()
    {
        a=0;
        b=0;
    }
    binary(int c,int d)
    {
        a=c;
        b=d;
        cout <<"The added value is :"<<a+b<<endl;
    }
    binary operator +(binary b1)
    {
        binary b2;
        cout <<"The value of b2 a inside overloading function is :" <<b2.a<<" "<<b2.b<<endl;
        cout <<"The value of b2 a inside overloading function is :"<<b1.a<<" "<<b1.b<<endl; 
        // calling object is passed implicitly and second object is passed through argument 
        b2.a=a-b1.a;
        b2.b=b-b1.b;
        return b2;
    }
    void diaplay()
    {
        cout <<"The value of a and b is :"<<a<<" "<<b <<endl ;    
    }
};
int main()
{
    binary bb1,bb2,bb3;
    bb1=binary(10,20);
    bb2=binary(30,40);
    bb3=bb1+bb2;
    bb1.diaplay();
    bb2.diaplay();
    bb3.diaplay();

}