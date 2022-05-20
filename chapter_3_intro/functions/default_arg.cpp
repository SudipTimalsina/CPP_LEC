#include <iostream>
using namespace std;

int sum(int x,int y,int z)
{
    return (x+y+z);
}
int sum(int a=3,int b=5)
{
    return (a+b);
}
int main()
{
    int added = sum(5,3,4);
    sum();
    cout <<" The sum is: "<< added;
}

