#include <iostream>
using namespace std;

void display(int a)
{
cout <<"The output is : "<< a << endl;
} 

void display(int b,int c)
{
    cout <<"The second output is : "<< b <<" " << c ;
}
int main()
{
    display(44,65);
    return 0;
}
