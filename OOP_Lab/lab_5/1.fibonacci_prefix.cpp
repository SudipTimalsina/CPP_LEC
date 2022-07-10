#include<iostream>
using namespace std;

class fibo
{   protected :
        int a,b;
    public :
    fibo()
    {
        a=0;
        b=1;
    }
    void operator ++()
    {
        int temp;
        temp=b;
        b=a+b;
        a=temp;
        
    }
    void display()
    {
        cout <<"\t"<<b;
    }
};
int main()
{
    fibo f1;
    int n;
    cout <<"Enter how many term you want to print :"<<endl;
    cin >>n;
    cout <<"The series is ..........."<<endl;
    cout <<"0 ";
    for (int i=0;i<n-1;i++)
    {   
        ++f1;
        f1.display();
    }
    
return 0;
}