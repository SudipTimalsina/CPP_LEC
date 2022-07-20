//  when a fucntion is made virtual it allows a program to decide at runtime which function to call based on the TYPE OF THE OBJECT
// POINTED BY THE POINTER rather than TYPE OF THE POINTER ITSELF

#include<iostream>
using namespace std;

class shape
{
    protected :
    int height, width;
    public :
    shape(int a = 0,int b = 0)
    {
        height=a;
        width=b;
    }
    void virtual area()
    {
        cout <<"The area of shape are"<<endl ;    
    }

};
class rectangle : public shape
{
    public :
    rectangle(int a,int b)
    {
        height=a;
        width=b;
    }
void virtual area()
{
     cout <<"The area of rectangle is :"<<height*width<<endl;
}

};
class triangle : public shape
{
    public :
    triangle(int a,int b)
    {
        height=a;
        width=b;
    }
    void virtual area()
    {
         cout <<"The area of triangle is :"<<(height*width)/2<<endl;
    }
};
 int main()
 {
     shape *shp ;
     shape sh(1,2);
     rectangle rec(10,7);
     triangle tri(4,5);

    shp=&sh;
    shp -> area();

    shp=&rec;
    shp ->area();

    shp=&tri;
    shp ->area();
    return 0;


 }
