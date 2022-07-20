#include <iostream>
  using namespace std;
 
double sum(int x,double y)
{
    return x+y;
}

int sum(int a,int b)
{
    return a+b;
}
double sum (double g, double h)
{
    return g+h;
}

int main()
{
int plus = sum(4,5);
cout <<"The sum of another number is: "<< plus<<endl;
cout <<"The sum is : "<< sum(4.2,2.5);

}