// Program to calculate the simple interest from given principle time and rate where rate is set as 15% by default if not mentioned 
#include<iostream>
using namespace std;

float interest(float p,float t ,float r=0.15)
{

    return ((p*t*r)/100);
}
int main()
{
float principle,time,rate=0,intr;
cout <<"Enter the Amount : " ;
cin >>principle;
cout <<"\nEnter the time in year's : " ;
cin >>time;
cout <<"\nEnter the rate : " ;
cin >>rate;
intr=interest(principle ,time,rate);
cout <<"The interest amount is : "<<intr;
return 0;
}