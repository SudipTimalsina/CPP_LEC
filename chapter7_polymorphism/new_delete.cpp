#include<iostream>
using namespace std;

int main()
{
    // declearing pointer variable
    int* pointInt;
    float* pointFloat;

// dynamically memory allocated 
    pointInt = new int;
    pointFloat= new float;

    cout <<"Address assigned to pointInt is :"<<pointInt <<endl;
    cout <<"Address assigned to pointFloat is :"<<pointFloat <<endl;

    *pointInt =45;
    *pointFloat =45.45f;

    cout <<"value assigned to pointerInt  is "<<*pointInt <<endl;
    cout <<"value assigned to pointerFloat is "<<*pointFloat <<endl;

delete pointInt ;
delete pointFloat;

return 0;
}