#include<iostream>
using namespace std;

class staff
{
    public :
    double code;
    char name[30];

    void getname()
    {
        cout<<"Enter the name of the employee :"; cin >>name;
        cout<<"\nEnter the code of the employee :"; cin >>code;
    }
    void display()
    {
     cout<<"\nThe name of the employee is" <<name;
     cout<<"\nThe code of the employee is: "<<code;
    }
};
class teacher : public staff
{   
    public :
    string subj;
    string pub;


void gettech()
{
    cout<<"For Teacher"<<endl;
    staff::getname();
    cout <<"\nEnter the name of the subject taught :"; cin >> subj;
    cout <<"\nEnter the name of the publication of book :"; cin >> pub;

}

void display()
{
    cout<<"For Teacher"<<endl;
    staff::display();
    cout <<"\nThe name of the subject taught is :"<<subj;
    cout <<"\nThe name of the publication of book :"<<pub;

}
};
class officer : public staff
{
    public :
        char grad;

    void getoff()
    {
     cout<<"For officer"<<endl;
     staff::getname();
     cout <<"\nEnter the grade officer secured :"; cin >> grad;
    }
    void display()
    {
        cout<<"For officer"<<endl;
        staff::display();
    cout <<"\nThe grade officer secured is:"<<grad;
    }
};
class typist : public staff
{
    public :
    string speed;
    void getdata()
    {
        staff::getname();
        cout <<"\nEnter the speed of the typist  :"; cin >> speed;
    }
    void display()
    { 
        staff::display();
    cout <<"\n The speed of the typist is :"<< speed;
    }
};
class regular : public typist
{   
    public :
    string sal;
    
    void getrec()
    {  cout<<"For regular typist"<<endl;
       typist::getdata();
       cout <<"\nEnter the wages of regular typist  :"; cin >> sal; 
    }
    void display()
    {
         cout<<"For regular typist"<<endl;
         typist::display();
         cout <<"\n wage of the typist is:"<< sal; 
    }
};
class casual : public typist
{
    public :
    double wages;

    void getcas()
    { 
        cout<<"For casual typist"<<endl;
        typist::getdata();
        cout <<"\nEnter the wages of the casual typist :"; cin >> wages;
    }
    void display()
    {
        cout<<"For casual typist"<<endl;
         typist::display();
         cout <<"\nThe wages of the casual typist is :"<<wages;
    }
};

int main()
{   
    teacher t1;
    t1.gettech();
    officer o1;
    o1.getoff();
    casual c1;
    c1.getcas();
    regular r1;
    r1.getrec();
    t1.display();
    o1.display();
    c1.display();
    r1.display();
    return 0;

};