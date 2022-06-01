// program to calculate area of triangle using member function
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
    return sqrt(s*(s-a)*(s-b)*(s-c));
    }
};
int main()
{
    double Area;
    triangle one;
    Area=one.calculatearea(5,4,2);
    cout <<"The area of triangle is : "<< Area <<endl;
    return 0;

}