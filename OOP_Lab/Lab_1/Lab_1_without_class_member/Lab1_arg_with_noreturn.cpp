#include<iostream>
#include<cmath>
using namespace std;
// fucntion with argument with return type 
void areaoftriangle(double x,double y,double z)
{
    // Here x,y,z are length of the sides if the triangle 
    // And s is the half of sum of all sides 
    double s , Area ;
    s=((x+y+z)/2);
    Area=sqrt(s*(s-x)*(s-y)*(s-z)) ;
  cout <<"The area of triangle is : "<< Area ;

}

int main()
{
 
    //calling function 
   areaoftriangle(5,4,2) ;
   return 0;
}