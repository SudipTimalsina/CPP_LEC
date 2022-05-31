#include<iostream>
#include<cmath>
using namespace std;
// fucntion with argument with return type 
double areaoftriangle()
{
    // Here x,y,z are length of the sides if the triangle 
    // And s is the half of sum of all sides 
    double x,y,z,s,area ;
    x=2; y=5; z=3.4;
    s=((x+y+z)/2);
    area = sqrt(s*(s-x)*(s-y)*(s-z)) ;
    cout <<"The area of triangle is : "<< area ;
    return 0;

}

int main()
{
    //calling function 
    areaoftriangle();
    return 0;
}