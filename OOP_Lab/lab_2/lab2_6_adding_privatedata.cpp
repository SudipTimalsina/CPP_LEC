#include<iostream>
using namespace std;
class B;
class A{
    private :
    int a;
    friend int add(A c ,B d);
    public :
    void getvalue()
    {
        cout <<"Enter the value of a :"<<endl;
        cin >>a;
    }

};
class B{
    private :
    int b;
    friend int add(A e, B f);
    public :
    void getvalue()
    {
        cout <<"Enter the value of b :"<<endl;
        cin >>b;
    }
};
int add(A x,B y)
{
    return x.a+y.b;
}
int main()
{
    A a1;
    B b1;
    a1.getvalue();
    b1.getvalue();
    int Add=add(a1,b1);
    cout <<"The sum is : "<<Add;



}