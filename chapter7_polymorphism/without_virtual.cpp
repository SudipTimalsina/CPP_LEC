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
    void area()
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
void area()
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
    void area()
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

    shp=&sh;
    shp ->area();
    return 0;
 }