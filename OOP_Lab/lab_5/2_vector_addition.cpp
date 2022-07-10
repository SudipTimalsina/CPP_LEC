#include<iostream>
using namespace std;

class vector
{
    private :
    int x,y,z;

    public :
    vector()
    {
        x=0;
        y=0;
        z=0;
    }
    void getvalue()
    {
        cout <<"Enter the values of vectors..... "<<endl;
       cout<<"Enter the value of x :";cin>>x;
       cout<<"\nEnter the value of y :";cin>>y;
       cout<<"\nEnter the value of z :";cin>>z;
    }
    vector operator +(vector v1)
    {
        vector temp;
        temp.x=x+v1.x;
        temp.y=y+v1.y;
        temp.z=z+v1.z;
        return temp;
    }
    void display()
    {
        cout <<"The value of sum is :"<<x<<" "<<y<<" "<<z<<endl ;    
    }
};
int main()
{
    vector v1,v2,v3 ;
    v1.getvalue();
    v2.getvalue();
    v3=v1+v2;
    v3.display();

}