#include <iostream>
using namespace std;

void ref(int a)
{
    a=10;
    cout <<"The value of a is : "<< a <<endl ;     //print in called function of value a

}
void val(int &b)
{
 b=15;
 cout  << "The value of b is : "<<b <<endl ;      //printing the value of b after calling in void function 
}
int main()
{
   int  a=5;
   int b=6;
 cout <<" initial value of a before calling is : " <<a <<endl ; //print before calling (in main function) 
 cout <<" initial value of b before calling is : " <<b <<endl ; //print before calling (in main function) 
   ref(a);
   val(b);
   cout <<"The value of a after call is : "<< a <<endl;         //printed after calling in main function
   cout <<"The value of b after call is : "<< b <<endl;         //printed the value of a after call
} 
