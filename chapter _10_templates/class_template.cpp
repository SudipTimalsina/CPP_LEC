#include<iostream>
using namespace std;

template <class t>
class calculator 
{
    private :
        t num1,num2;
    public :
    calculator (t n1,t n2)
    {
        num1=n1;
        num2=n2;
    }
    void displayresults()
    {
        cout <<"Numbers are :"<<num1<<" and "<<num2<<"."<<endl;
        cout <<"Addition is :"<<add()<<endl;
        cout <<"Subtract is :"<<subtract()<<endl;
        cout <<"product is :"<<product()<<endl;
        cout <<"Division is :"<<division()<<endl;
    }
    t add() {return num1+num2;}
    t subtract() {return num1-num2;}
    t product(){return num1*num2;}
    t division(){return num1 / num2 ;}
};
int main()
{
    calculator<int>intcalc(5,4);
    calculator<float>floatcalc(2.2,5.6);

    cout<<"Int result ......"<<endl;
    intcalc.displayresults();
    cout<<"Float result ......"<<endl;
    floatcalc.displayresults();
    return 0;
}