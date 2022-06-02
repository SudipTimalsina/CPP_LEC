#include<iostream>
using namespace std;

class helloworld{
    public :
    helloworld(){
        cout <<"The constructor is called. "<<endl;

    }
    ~helloworld(){
        cout <<"The destructor is called. "<<endl;

    }
};
void display()
{
    cout <<"How you doin!" <<endl;
}
int main ()
{
    helloworld obj;
    display();
    return 0;

}