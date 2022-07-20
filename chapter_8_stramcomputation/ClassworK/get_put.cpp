// get_put.cpp
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char c,str[25];
    // cout<<"Enter a character :";
    // cin.get(c);
    cout<<"Enter the string :";
    cin.get(str,20);
    // cout<<"\nThe entered character is :";
    // cout.put(c);
    cout<<"\nThe entered String  is :"<<str;                 //here cout.put(data ) is not giving string as output so using classic form
    // cout.put(str[20]);
    return 0;
}