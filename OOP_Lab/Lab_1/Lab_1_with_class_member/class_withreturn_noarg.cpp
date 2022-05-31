#include<iostream>
#include<cmath>
using namespace std;

class triangle{
    private :
    double a,b,c ;

    public :
    double calculatearea()
    {
    double a=6;
    double b=3;
    double c=5;
    double s=((a+b+c)/2);
    return sqrt(s*(s-a)*(s-b)*(s-c));

    }
};
int main()
{
    double Area;
    triangle one;
    Area=one.calculatearea();
    cout <<"The area of triangle is : "<< Area <<endl;
    return 0;

}