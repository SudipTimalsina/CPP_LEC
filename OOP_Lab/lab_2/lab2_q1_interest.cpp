//WAP in c++ to calculate simple interest from given principle time and rate

#include<iostream>
using namespace std;

class interest{
    private:
        float principle,rate,time;

    public:

     void calculateintr(float principle, float time, float rate=15){
        float interest = ((principle*rate*time)/100);
        cout<<"\nThe simple interest is  : "<<interest  ;
        }
};

int main(){
    interest i1;
    i1.calculateintr(56000,3.2,11.5);
    i1.calculateintr(56000,3.2);
}