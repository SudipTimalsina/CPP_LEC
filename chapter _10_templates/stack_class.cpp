#include<iostream>
using namespace std;

const int MAX=20;

template<class t>
class stack
{
    private :
        t arr[MAX];
        int top;
    public :
    stack()
    {
        top=-1;
    } 
    void push(t data)
    {
        arr[++top]=data;
    }
    pop()
    {
        return arr[top--];
    }
    int size()
    {
        return (top+1);
    }
};
int main()
{
    cout <<"stack for integer data type"<<endl;
    stack <int > s1;
    cout <<"size of stack "<<s1.size() <<endl;
    s1.push(11);
    s1.push(44);
    s1.push(22);
    cout <<"The size of stack after push :"<<s1.size()<<endl;
    cout<<"The number popped is :"<<s1.pop()<<endl;
    cout<<"The number popped is :"<<s1.pop()<<endl;
    cout <<"The size of stack :"<<s1.size()<<endl;
    s1.push(55);
    cout <<"The size of stack :"<<s1.size()<<endl;
    cout <<"number popped is:"<<s1.pop()<<endl;
    cout <<"The size of stack :"<<s1.size()<<endl;

    // cout <<"stack for floating point data type"<<endl;
    // stack <float> s2;
}