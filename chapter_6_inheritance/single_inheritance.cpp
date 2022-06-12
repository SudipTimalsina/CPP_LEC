#include<iostream>
using namespace std;

class animal{   
    public :         //base class
void eat(){
    cout <<"Eating ......"<<endl;
}
};
class dog : public animal{
    public :
    void bark(){
        cout <<"Barking....."<<endl;

    }
};
int main()
{
    dog d1;
    d1.eat();
    d1.bark();
    return 0;

}