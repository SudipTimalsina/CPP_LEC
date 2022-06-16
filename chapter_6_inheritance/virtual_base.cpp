#include<iostream>
using namespace std;

class A{
     public :
    void displaya()
    {
        int a=50;
        cout <<"The value of a is :"<<a<<endl; 
    }
};
class B : public virtual A 
{
     public :
    void displayb()
    {
        cout <<"The value of b is 20"<<endl;
    }
};
class C : public virtual A
{
     public :
    void displayc()
    {
        cout <<"The value of c is 30"<<endl;
    }
};
class D :public B,public C
{
    public :
    void displayd()
    {
        cout <<"The value of d is 90"<<endl;
    }
};
int main()
{
    D d1;
    d1.displaya();
    d1.displayb();
    d1.displayc();
    d1.displayd();
    return 0;
}