//implicit type comversion-the type conversion that is done automatically done by the compiler 
#include<iostream>
using namespace std;

int main()
{
    //assigning a int value to num_int
    int num_int =9;
    //declearing a double type variable 
    double num_double;
    char char_test;

    //implicit conversion 
    // assigning int value to a double variable 
    num_double = num_int;
    char_test= num_int;

    cout <<"num_int : " <<num_int <<endl;
    cout <<"num_double : " <<num_double <<endl;
    cout <<"char_test : " <<char_test <<endl ;
    return 0;

}
