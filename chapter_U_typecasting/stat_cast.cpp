
#include<iostream>
using namespace std;

int main()
{
    int i;
    float f=3.296676;
    i=f;
    cout<<"The value of float is "<<f<<endl;
    cout <<"The value of int is "<<i<<endl;

    i=static_cast<int>(f);
    cout <<"The value of intiger is :"<<i<<endl;
    return 0;
}