#include<iostream>
using namespace std;

class base
{
    public :
        base(){
            cout <<"Base constructor is called .........."<<endl;
        }
        ~base(){
            cout <<"Destructor is called .................."<<endl;
        }
};
int main()
{
    base();
    base b2;
}