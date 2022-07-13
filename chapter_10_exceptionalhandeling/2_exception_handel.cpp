#include<iostream>
using namespace std;

int main()
{
    float x=-11;
    cout <<"Before try \n";
    try
    {
        cout <<"Inside try\n";
        if (x<0)
      throw x;
      cout <<"After thrown \n";
    }
    catch(int x) 
    {   
        cout <<"Exception caught Int type \n";
    }
    catch (float x)
    {
        cout <<"Exception caught Float type \n";
    }
    cout<<"After catch \n";
    // cout <<"The value without exception is :"<<x<<endl;
    return 0;
}