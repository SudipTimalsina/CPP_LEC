#include<iostream>
using namespace std;

    class array
    {
        protected :
            int  arr[10];   
        public :
            class low{};
            class high{};
        
        int operator [](int i)
        {
            if(i<0){
                throw low();}
            else if(i>=10){
                throw high();}
            return arr[i];
        }
    };
int main()
{
    array a1;
    int index;
    try{
    cout<<"Enter the number of arrays (in between 0 and 10):"<<endl;
    cin>>index;
    a1[index];
    cout <<"The index "<<index<<" is within range"<<endl;
    }
    catch(...)
    {
        cout <<"exception has occoured..";
    }
}