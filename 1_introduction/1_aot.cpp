// q.Write the program to calculate the area of triangle.
#include<iostream>

using namespace std;
int main ()
{     
    int height, base, area;        
    cout << "Enter the value of height: " ;
    cin >> height; 
    cout << "Enter the value of base: ";
    cin >> base;
    area=0.5*height*base;

   cout << "The area of triangle is: "<< area;

    return 0;
}