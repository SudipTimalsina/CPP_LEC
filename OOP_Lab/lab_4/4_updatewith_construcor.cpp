#include<iostream>
using namespace std;

class person
{
    protected :
    string name;
    char code[20];

    person()
    {
        cout<<"Enter the name of the person :"<<endl;cin>>name;
        cout<<"Enter the code number of person :"<<endl;cin>>code;
    }
    void display()
    {
        cout<<"The name of person is :"<<name<<endl;
        cout<<"The code of person is :"<<code<<endl;
    }
};
class account : public virtual person
{   
    public:
    float payment;
    account()
    {   
        cout <<"Enter the payment amount :"<<endl;cin>>payment;
    }
    void display()
        {
        cout <<"The payment is : "<<payment<<endl;
        }
};
class admin: public virtual person
{
        public :
    float exp;
    admin()
    {
        cout <<"whats the experience in years:"<<endl;cin>>exp;
    }
    void display()
    {
        cout <<"The experience is :"<<exp<<endl;
}
};
class master: public admin,public account{
    public :
    void getdata(){}
    void display()
    {
    cout<<"The detail of the person is........."<<endl; 
    person::display();
    account::display();
    admin::display();  
    }

};
int main()
{
    master m1;
    m1.getdata();
    m1.display();
    int str;
    cout <<"do you want to override the data ? IF yes then press 1";cin>>str;
    if (str==1)
    {
    m1.getdata();
    m1.display();
    }
    else {
        cout<<"The data is shown";
    }
    return 0;
}