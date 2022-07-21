
#include<iostream>
using namespace std;

class base{
    public:
        virtual void print(){
            cout<<"Base"<<endl;
        }
};

class derived : public base{
    public:
        void print(){
            cout<<"Derived 1"<<endl;
        }
};

int main()
{
    base *bptr ,bpt;
    derived *dptr, dpt;

    bptr=&dpt;  //base class pointer is holding derived class objects address 

    dptr=dynamic_cast<derived *>(bptr);//base pointer lai derive pointer ma cast garna no error as bptr ios holding addresss of derived class
    dptr->print();


    if(dptr==nullptr){
        cout<<"Null pointer"<<endl;
    }else{
        cout <<"no null"<<endl;
    }
    return 0;
}