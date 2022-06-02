#include<iostream>
using namespace std;

class constr{
    public :
    int a ;
    int b;
    constr()
    {
        cout <<"The constructor is called "<<endl;
        a=5;
        b=10;
    }
    void display()
    {
        cout <<"\nName";
    }

};
int main()
{
    constr c1 ;
    cout <<"The values are :"<<c1.a<<"\n"<<c1.b   ;
    c1.display();
    return 0;
    
}