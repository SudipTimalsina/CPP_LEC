// program to show use of function get()
#include<iostream>
using namespace std;

const int MAX=50;
char str1[MAX];
char str2[MAX];
int main()
{
    cout<<"Enter a string terminated by newline :"<<endl;
    cin.get(str1,MAX);
            // read string until MAX character or new line is reached 
    cout<<"Enter the multiple string including newline :"<<endl;
    cin.get(str2,MAX,'$');
            // reads multiple string including newline 
            // reads string until MAX char or '$' is reached.
    cout<<"String you entered are :"<<endl;
    cout<<"String 1 :"<<str1<<endl;
    cout<<"String 2 :"<<str2<<endl;
    return 0;
}