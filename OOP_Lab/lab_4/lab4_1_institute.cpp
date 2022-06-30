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
};
class teacher : public staff
{   
    public :
    string subj;
    string pub;

void gettech()
{
    cout <<"\nEnter the name of the subject taught :"; cin >> subj;
    cout <<"\nEnter the name of the publication of book :"; cin >> pub;

}
};
class officer : public staff
{
    public :
        char grad;

    void getoff()
    {
     cout <<"\nEnter the grade officer secured :"; cin >> grad;
    }
};
class typist : public staff
{
    string speed;

    void getspeed()
    {
        cout <<"Enter the speed of the typist  :"; cin >> speed;
    }
};
class regular : public typist
{   
    public :
    string recs;
    
    void getrec()
    {
       cout <<"Enter the regular speed of the typist  :"; cin >> recs; 
    }
};
class casual : public typist
{
    public :
    double wages;

    void getcas()
    {
        cout <<"Enter the wages of the casual typist :"; cin >> wages;
    }
};

int main()
{
    casual c1;
    c1.getcas();

    return 0;
};