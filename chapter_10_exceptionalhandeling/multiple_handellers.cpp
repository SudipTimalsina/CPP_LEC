#include<iostream>
#define MAX 2
using namespace std;

class stack{
    protected :
        int s[MAX];
        int top;
    public :
        class FULL{}; //Exception class for full stack with enpty class
        class Empty{};

    stack(){
        top=-1;
    }
    void push(int x){
        if(top==MAX-1){
            throw FULL();
        }else {
            s[++top]=x;
        }
    }
    int pop(){
        if(top==-1){

            throw Empty();
            }else{
                return s[top--];
            }
        
        }
    };

int main()
{
    stack s;
    try {
        s.push(11);
        s.push(22);
        // s.push(33);

        cout <<"Member popped: "<<s.pop()<<endl;
        cout <<"Member popped: "<<s.pop()<<endl;
        // cout <<"Member popped: "<<s.pop()<<endl;
    }
    catch(stack::FULL){
        cout<<"Exception stack is full "<<endl;
    }
    catch(stack::Empty){
        cout<<"Exception stack is Empty"<<endl;
    }
    return 0;
}