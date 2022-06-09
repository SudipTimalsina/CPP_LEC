#include<iostream>
using namespace std;

class complex{
    public :
    double real;
    double imaginary;
public :

    void getvalue()
    {
        cout <<"Enter the value of real and imaginary part of number : "<<endl;
        cin >> real >>imaginary ;
    }

    void addition(complex c1,complex c2)
    {
    complex result;
    result.real=c1.real+c2.real;
    result.imaginary=c1.imaginary+c2.imaginary;
    cout <<"The value is : "<<result.real <<" i"<<result.imaginary ;
    }

};
int main()
{
 complex c1,c2,result;
 c1.getvalue();
 c2.getvalue();
 result.addition(c1,c2);
 return 0;
}
