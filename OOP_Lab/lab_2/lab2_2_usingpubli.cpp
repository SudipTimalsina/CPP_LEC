// program to define class in c++
#include<iostream>
using namespace std;

class student {
    public :
    char name[20];
    int roll;
    char address[20];
    float percentage;

};

int main() {
    student s[3];

    for(int i=0; i<3; i++) {
        cout<<"Enter the details of the student "<<i+1<<": "<<endl;
        cout <<"Name: ";
        cin>>s[i].name;
        cout<<"Roll Number: ";
        cin>>s[i].roll;
        cout<<"Address: ";
        cin>>s[i].address;
        cout<<"Percentage: ";
        cin>>s[i].percentage;

    }
    for(int i=0; i<3; i++ ) {
        if(s[i].percentage>39.9){
        cout<<"\n The detail of the student "<<i+1<<" is: "<<endl;
        cout<<"Name: "<<s[i].name<<endl<<"Roll No: "<<s[i].roll<<endl<<"Address: "<<s[i].address<<endl;
        }  
    }
    return 0;
    
}