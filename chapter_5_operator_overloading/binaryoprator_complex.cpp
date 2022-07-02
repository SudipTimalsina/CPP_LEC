#include<iostream>
using namespace std;

class complex{
    private :
    int real, imaginary;

    public :
    complex()
    {
        real=0;
        imaginary=0;
    }
    void input()
    {
        cout <<"Enter the value of real and imaginary part of complex number :"<<endl;
        cin >>real>>imaginary;  
    }
    complex operator +(complex ccc)
    {
        complex temp;
        // cout <<"the value of real and ing is :"<<real<<" "<<imaginary<<endl;
        temp.real=real+ccc.real;
        temp.imaginary=imaginary+ccc.imaginary;
        return temp;
    }
  void diaplay()
  {
      cout <<"The value of complex number is :"<<real<<"+i"<<imaginary<<endl;
  }
};
int main()
{
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1+c2;
    c3.diaplay();
    return 0;
}