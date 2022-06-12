// an example of multiple inheritance
#include<iostream>
using namespace std;

class student{
    private :
        char name[25];
        int studID;
    public :
        void getdata()
        {
            cout <<"\nEnter Name :";
            cin >>name;
            cout <<"\nEnter Student ID :";
            cin >>studID ;
        }
        void showdata()
        {
            cout <<"\nName="<<name;
            cout <<"\nStudent ID="<<studID ;
        }
};
class employee
{
    private :
        char org_name[25];
        int empID;
    public :
        void getdata()
        {
            cout <<"Enter Name of associated organization :";
            cin >>org_name;
            cout <<"\nEnter employee ID :";
            cin >>empID;
        }
        void showdata()
        {
            cout <<"\nName of associated student union :"<<org_name;
            cout <<"\nEmployee ID :"<<empID;
        }
};
class marketing_officer : public student ,public employee
{
    private :
        int working_hrs;
    public :
        void getdata()
        {
            student ::getdata();
            employee ::getdata();
            cout <<"Enter working hours :";
            cin >>working_hrs;
        } 
        void showdata()
        {
            student ::showdata();
            employee ::showdata();
            cout <<"\nWorking hours ="<<working_hrs;
        }
};
int main()
{
    marketing_officer moff;
    cout <<"Enter data of marketing officer"<<endl;
    moff.getdata() ;
    cout <<"\nData of marketing officer "<<endl ;
    moff.showdata() ;
    return 0;

}