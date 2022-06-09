// Q. Write a program to read the record of 5 students(name, address) and display the record using structure in C++

#include<iostream>
#include<conio.h>

using namespace std;

struct student {
    char name[20];
    char address[20];
};

int main() {
    student s[5];
    for(int i=0; i<3; i++) {
        cout<<"Enter the details of the student "<<i+1<<": "<<endl;
        cout <<"Name: ";
        cin>>s[i].name;
        cout<<"Address: ";
        cin>>s[i].address;
    }

    for(int i=0; i<3; i++) {
        cout<<"\n The detail of the student "<<i+1<<"is: "<<endl;
        cout<<"Name: "<<s[i].name<<endl<<"Roll No: "<<"Address: "<<s[i].address<<endl;
    }
}