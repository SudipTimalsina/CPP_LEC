// program to calculate area of triangle using member function with argument but without return type
#include<iostream>
#include<cmath>
using namespace std;

class triangle{
    private :
    double a,b,c ;

    public :
    double calculatearea(double x,double y,double z)
    {
    a=x;
    b=y;
    c=z;
    double s=((a+b+c)/2);
    double Area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout <<"The area of triangle is : "<< Area <<endl;
    }
};
int main()
{
    double Area;
    triangle one;
    one.calculatearea(5,4,2);
    return 0;

}