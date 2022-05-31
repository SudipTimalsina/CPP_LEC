#include<iostream>
#include<cmath>
using namespace std;
// fucntion with argument with return type 
double areaoftriangle(double x,double y,double z)
{
    double s=((x+y+z)/2);
 return sqrt(s*(s-x)*(s-y)*(s-z)) ;

}

int main()
{
    // Here a,b,c are length of the sides if the triangle 
    // And s is the half of sum of all sides 
    double Area ;
   //calling function 
    Area=areaoftriangle(5,4,2) ;
    cout <<"The area of triangle is : "<< Area ;
    return 0;
}