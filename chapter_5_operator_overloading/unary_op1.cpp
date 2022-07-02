// after overloading the operator it can be applied to an object in the same way as it is applied to the basic type
#include<iostream>
using namespace std;

class count
{
    private :
    int value ;

    public :
    count()
    {
       value=5; 
    }
    void operator ++()
    {
        ++value;
    }
    void display()
    {
        cout <<"The value of the VALUE is : "<<value<<endl;
    }
};
int main()
{
    count obj;
    ++obj;
    obj.display();
    return 0;

}