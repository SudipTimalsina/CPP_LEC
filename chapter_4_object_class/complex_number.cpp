#include<iostream>
using namespace std;

class complex{
    private :
    double real;
    double imaginary;
public :
    void getvalue()
    {
        cout <<"Enter the value of real and imaginary part of first number : "<<endl;
        cin >> real >>imaginary ;
    }

    complex addition(complex c1,complex c2)
    {
    result.real=c1.real+c2.real;
    result.imaginary=c1.imaginary+c2.imaginary;
    return result;
    }

};
int main()
{
 complex result,c1,c2;
 c1.getvalue();
 c2.getvalue();
result.addition();




}
