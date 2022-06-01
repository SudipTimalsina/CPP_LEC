// program to calculate area of triangle using member function without argument and return type
#include<iostream>
#include<cmath>
using namespace std;

class triangle{
    private :
    double a,b,c ;

    public :
    void calculatearea()
    {
    double a=6;
    double b=3;
    double c=5;
    double s=((a+b+c)/2);
    double Area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout <<"The area of triangle is : "<< Area <<endl;
    }
};
int main()
{
    
    triangle one;
    one.calculatearea();
    return 0;

}