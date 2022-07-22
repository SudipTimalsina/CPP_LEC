#include<iostream>
using namespace std;

class celsius{
    private :
        float temper;
    public :
        celsius(){
            temper=0;
        }
    operator float()
    {
        float ferr;
        ferr=temper*9/5+32;
        return ferr;
    }
    void getvalue()
    {
        cout<<"Enter the value of the temperature in celsius :";cin>>temper;
    }
};
int main()
{
    celsius cels;
    float fer;
    cels.getvalue();

    fer=cels;
    cout<<"Temperature in fehrenheit measurement is :"<<fer;
    return 0;
}