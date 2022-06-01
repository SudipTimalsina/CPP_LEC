#include<iostream>
using namespace std;

class student {
private :
string name;
string roll;
string address;

public :
void data()
{
    cout <<"..........Inserting  the information of a student.......... " <<endl; 
    cout <<"\nEnter name :";
    cin >> name ;
    cout <<"\nEnter roll :";
    cin >> roll ;
    cout <<"\nEnter address :";
    cin >> address ;
}
void display()
{
    cout <<"..........Displaying the information of the student.........."<<endl;
    cout <<"Name : "<< name <<endl;
    cout <<"roll :  "<< roll <<endl;
    cout <<"address : "<< address <<endl;
 }
};
int main()
{
 student s1;
s1.data();
s1.display();
}