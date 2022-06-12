// An example of single inheritance 
#include<iostream>
using namespace std;

class student{
    private :
        char name[50];
        int studid;
    public :
        void getdata()
        {
            cout <<"\nEnter name :";
            cin >>name;
            cout <<"Enter student Id :";
            cin >>studid;
        }
        void showdata()
        {
            cout <<"\nName :"<<name;
            cout <<"\nStudent ID :"<<studid;
        }
};
class leader : public student 
{
    private :
        char union_name[25];
    public :
        void getdata()
        {
            student ::getdata();
            cout <<"Enter name of associated student union :";
            cin >>union_name;
        }
        void showdata()
        {
            student:: showdata();
            cout <<"\n Name of the associated student union :"<<union_name;
        }
};
int main ()
{
    leader ld;
    cout <<"Enter data on leader of student union "<<endl;
    ld.getdata();
    cout <<"\n Data on leader of student union"<<endl;
    ld.showdata();
    return 0;
}
