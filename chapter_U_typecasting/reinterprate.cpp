#include<iostream>
using namespace std;

int main()
{
    int i=100;
    cout<<"The address of the integer is "<<&i<<endl;
    int *p;

    // p=i; //cannot assign int to int*,intiger to pointer conversion
    // p= reinterpret_cast<int *>(i);
    // cout <<"The value of p is :"<<p;

    int ivar;
    double dvar;
    int *pivar;
    double *pdvar;
    void *pvoid;

    pivar=reinterpret_cast< int *>(&dvar);
    //  pivar=reinterpret_cast< int *>(dvar); //invalid type conversion, here double variable cannot be converted into integer pointer 
    pivar=reinterpret_cast< int *>(ivar);//integer variable to integer pointer casting is oksy
    // pivar=reinterpret_cast< double *>(ivar);
    //                                
}