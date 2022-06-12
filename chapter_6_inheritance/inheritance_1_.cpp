#include<iostream>
using namespace std;

class account{            //base class
    public :
    float salary = 50000;

};
class programmer : public account  //derive class   
{
    public :
    float bonus =6000;
};
int main()
{
    programmer p1;
    account a1;
    cout <<"The salary of other is : "<<a1.salary<<endl;  //a1.bonus cant be accessed by the account object 
    cout <<"The salary of programmer is :"<<p1.salary+p1.bonus<<endl;//here programmer class can access the base class attribute

}