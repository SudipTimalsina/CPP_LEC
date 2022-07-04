#include<iostream>
using namespace std;
class Student 
{
    protected:
    string name;
    int roll;
    public:
    void getData()
    {
        cout<<"\nEnter the name of the student :";cin>>name;
        cout<<"\nEnter the roll no :";cin>>roll;
    }
    void showData()
    {
        cout<<"Name : \t"<<name<<endl;
        cout<<"Roll : \t"<<roll<<endl;
    }
};
class Test : public Student 
{   
    protected:
    float Math;
    float Eng;
    public :
     void getData()
    {   
        Student::getData();
        cout<<"\nEnter the marks in maths :";cin>>Math;
        cout<<"\nEnter the marks in english :";cin>>Eng;
    }
    void showData ()
    {   
        Student::showData();
        cout<<"Maths :"<<Math<<endl;
        cout<<"English :"<<Eng<<endl;
    }
};
class Sport 
{   
    protected:
    float Sprt;
    public :
     void getData()
    {   
        cout<<"Enter the score in Sports :"<<endl;
        cin>>Sprt;
    }
    void showData ()
    {   
        cout<<"Sports :"<<Sprt<<endl;
    }
};
class Result :public Test ,Sport 
{
  protected:
  float Result ;
  public:
  void getData ()
  {
    Test::getData();
    Sport::getData();
  }
  void showData()
  {
    Test::showData();
    Sport::showData();
    cout<<"Result :"<<Math+Eng+Sprt<<endl;
  }
};
int main()
{
    Result r1 ;
    r1.getData();
    r1.showData();
    return 0;
}