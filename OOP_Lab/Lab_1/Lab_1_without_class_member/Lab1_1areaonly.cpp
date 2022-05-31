#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    // Here a,b,c are length of the sides if the triangle 
    // And s is the half of sum of all sides 
    double a,b,c,s, Area ;
    a=5; b=4; c=2;
    s=((a+b+c)/2) ;
    // calculating the area of triangle 
    Area=sqrt(s*(s-a)*(s-b)*(s-c)) ;
    cout <<"The area of triangle is : "<< Area ;
    return 0;
}