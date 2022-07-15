// write a program to record students name roll and mark with exception with negative roll and mark more than Fullmark.
#include<iostream>
using namespace std;

class student
{
    public :
        string name;
        int roll;
        float mark;
        class err_mark{};
        class err_roll{};
        student()
        {
            cout <<"Enter the following details of student......"<<endl;
             cout<<"Enter the name of the student: ";cin>>name;
             cout<<"Enter the roll of the student: ";cin>>roll;
             cout<<"Enter the Mark of the student (Max is  100): ";cin>>mark;
        
        if(roll<0)
            throw err_roll();

        if(mark>100)
            throw err_mark();
        }

        ~student()
        {
             cout<<"Name of the student :"<<name<<endl;
             cout<<"Roll of the student :"<<roll<<endl;
             cout<<"Mark of the student :"<<mark<<endl;
        }
};

int main()
{
    try{
        student();
    }
    catch (student ::err_roll)      //to catch the error thrown by the roll being negative
    {
        cout <<"The given roll is in negative which is invalid input"<<endl;
    }
    
    
    catch (student ::err_mark)    //to catch the error thrown by mark more than 100
    {
        cout <<"The given mark is greater than the Maximum mark ";
    }
    return 0;
}