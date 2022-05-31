#include<iostream>
using namespace std;

struct student
{
    string name;
    string roll;
    string address;
};

int main(){
    student st;
    cout<<"Enter all the following info of students: "<<endl;
    cout<<"\nName: ";
    cin>>st.name;
    cout<<"\nRoll: ";
    cin>>st.roll;
    cout<<"\nAddress: ";
    cin>>st.address;
    cout<<"Displaying the info of all the students : "<<endl;
    cout<<"Name = "<<st.name<<endl;
    cout<<"Roll = "<<st.roll<<endl;
    cout<<"Address = "<<st.address<<endl;

    return 0;
}