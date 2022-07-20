#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[100];

    // open file in write mode
    ofstream outfile;
    outfile.open("createfile.txt");

    cout<<"Writing to the file"<<endl; 
    cout<<"Enter your name :"; 
    cin.getline(data,100);

    // write input data into the file
    outfile<<data<<endl;

    cout<<"Enter your age";
    cin>>data;

    // ignore or clear one or more characters from the input buffer
    cin.ignore();

    // again write input data into the file
    outfile<<data<<endl;
    // close the file 
    outfile.close();
    return 0;

    // open file in read mode
    // ifstream infile;
}