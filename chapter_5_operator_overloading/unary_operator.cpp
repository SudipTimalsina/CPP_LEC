#include<iostream>
using namespace std;

class unary
{
    protected :
    int a,b,c;
    public :
    unary(){}
    void getvalue(int x,int y,int z)
    {
        a=x;b=y;c=z;
    }

    void operator +()
    {
        a=-a;
        b=-b;
        c=-c;

    }
    void display()
    {
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
        cout<<"the value of c is"<<c<<endl;
    }
};
int main()
{
unary obj;
obj.getvalue(-10,20,30);
obj.display();
+obj;
obj.display();
}