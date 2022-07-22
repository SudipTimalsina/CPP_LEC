#include<iostream>
using namespace std;

class celsius{
    private :
        float temper;
    public :
        celsius(){
            temper=0;
        }
    celsius(float ftem)
    {
        temper=(ftem-32)*(5/9);
    }
    
    void showtemper()
    {
        cout <<"The temperature in celsius is :"<<temper<<" degree celsius"<<endl;
    }
};
int main()
{
    celsius c1;
    int ftem;
    cout <<"Enter the value of temperature in degree f: ";
    cin>>ftem;
    c1=ftem;
    c1.showtemper();
}