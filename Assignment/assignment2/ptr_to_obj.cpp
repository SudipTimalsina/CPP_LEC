// ptr to obj
// accessing members of object 
#include<iostream>
using namespace std;

class test
{
    public :
        int data;
        test()
        {
            cout <<"\nconstructor test() is called"<<endl;
            data=55;
        }
        ~test()
        {
            cout <<"\nDestructor ~test() is called "<<endl;
        }
        void show()
        {
            cout <<"\ndata is "<<data <<endl;

        }
};
int main()
{
    test *ptr;
    test tobj; //constructor is invoked here 
    // storing the address of staically created object tobj 
    ptr=&tobj;
    cout <<"\nAccessing object through tobj.show()...";
    tobj.show();
    cout <<"\nAccessing object through ptr->show().. ";
    ptr->show();
    return 0;
}
