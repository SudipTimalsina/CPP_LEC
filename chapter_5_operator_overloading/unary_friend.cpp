#include<iostream>
using namespace std;

class unary
{
private :
    int a=10,b=-20,c=-30;
public :
    void show()
    {
        cout <<"the values are :"<<a<<" "<<b <<" "<<c<<endl;
    }
    void friend operator -(unary &u1);
};
void operator -(unary &u1)
{
    u1.a=-u1.a;
    u1.b=-u1.b;
    u1.c=-u1.c;
}
int main()
{
    unary f1,f2;
    cout <<"Before overloading ";
    f1.show();
    -f1;
    cout <<"After overloading ";
    f1.show();

return 0;

}

