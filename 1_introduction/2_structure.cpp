// WAP in c++ to read the record of student's Name Address and Roll and display using structure
#include <iostream>

using namespace std;
struct student
   {
     char Name[30];
     char Address[40];
     char roll[20];
   } s1;

int main ()
 {
   
   cout <<"Enter the full name of the student: ";
   cin>>s1.Name;
   cout <<"Enter the Address of the student: ";
   cin>>s1.Address;
   cout <<"Enter the roll of the student: ";
   cin>>s1.roll;

   cout <<"\n ..Displaying Information.." << endl;
   cout << "Name "<< s1.Name << endl; 
   cout << "Address "<< s1.Address << endl; 
   cout << "roll "<< s1.roll << endl; 
   return 0;
 }