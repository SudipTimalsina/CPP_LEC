#include<iostream>
using namespace std;

class count {
    private :
    int a=-5;

    public :
    count(){}
    void operator ++(int)
    {
        a++;

    }
    void display()
    {
        cout <<"The value is : "<<a<<endl;

    }
};
int main()
{
    count c1;
    c1++;
    c1.display();
    return 0;
}