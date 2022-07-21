/*  

*/
#include<iostream>
using namespace std;

class student{
    private :
        int age;
    public :    
        student(){
            age=25;
        }
friend istream& operator >> (istream& input, student& obj);
friend ostream& operator << (ostream& output,student& obj);
};

istream& operator >>(istream& input, student& obj)
{
    input >> obj.age;
    return input;
}

ostream& operator << (ostream& output, student& obj)
{
    output<<obj.age;
    return output;
}

int main()
{
    student s;

    cout<<s<<endl;

    cin>>s;

    cout<<s;

    return 0;
}