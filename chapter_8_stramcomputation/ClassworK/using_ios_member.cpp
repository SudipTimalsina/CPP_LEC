
#include<iostream>
using namespace std;

void IOS_width()
{
    cout <<"--------------------\n";
    cout<<"Implementing ios::Width\n";
    char c = 'A';

    // Adjusting width will be 5
    cout.width(5);
    cout<<c<<"\n";

    int temp = 10 ;
    cout.width(20);
    cout<<temp;
    cout<<"\n----------------------------\n";
}

void IOS_precision()
{
       cout <<"--------------------\n";
    cout<<"Implementing ios::Precision\n\n";
    cout<<"implememting::width";

    // makes cout print floats with a fixed numbver of decimals 
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);
    cout<<3.14222;
    cout<<"\n-------------------------------------\n";
    }
    // 

    void IOS_fill()
    {
        cout<<"\n-----------------------\n";
        cout<<"Im,plementing ios::fill\n\n";
        char ch = 'a';



        cout.fill('*');
        cout.width(10);
        cout<<ch<<"\n";
        int i=1;
        cout<<"\n---------------\n";

    }
    int main()
    {
        IOS_width();
        IOS_precision();
        IOS_fill();
        return 0;

    }