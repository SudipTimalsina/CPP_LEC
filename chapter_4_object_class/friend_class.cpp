#include<iostream>
using namespace std;

class class1{
    friend class class2;
    private :
    double mark;
    public :
    class1(double m){
        mark=m;
    }
};

class class2{
    public :
    class2(class1 obj){
        cout <<"The value of mark is : "<< obj.mark;
    }
};
int main ()
{
    class1 obj1(55);
    class2 obj2(obj1);
    return 0;

}