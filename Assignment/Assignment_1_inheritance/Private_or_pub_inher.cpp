#include<iostream>
using namespace std;

class A{
    private :
        int pvtdataA;
    protected :
        int protdataA;
    public :
        int pubdataA;
};
class B : public A  //publically derived 
{
    public :
    void func()
    {
        int a;
        a=pvtdataA; //error not accessable
        a=protdataA; //ok
        a=pubdataA;  //ok
    }
};
class C : protected A  //protected derived
{
    public :
        void func()
        {
         int a;
        a=pvtdataA; //error not accessable
        a=protdataA; //ok
        a=pubdataA;  //ok
        }
};
class D : private A //privately derived     
{
    public:
    void func()
    {
        int a;
        a=pvtdataA; //error not accessable
        a=protdataA; //ok
        a=pubdataA;  //ok
    }
};
int main()
{
    int num;
    B objB;
    num=objB.pvtdataA; //error :not accessable 
    num=objB.protdataA; //error :not accessable
    num=objB.pubdataA;  //ok pubdataA is public to B

    C objc;
    num=objc.pvtdataA; //error :not accessable 
    num=objc.protdataA; //error :not accessable
    num=objc.pubdataA;  //error due to (pubdataA is protected to C)

    D objd;
    num=objd.pvtdataA; //error :not accessable 
    num=objd.protdataA; //error :not accessable
    num=objd.pubdataA;  //error due to (pubdataA is Private to D)

    return 0;

}