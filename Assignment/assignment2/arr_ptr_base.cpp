// array of pointer of base class
// example of array of pointer to basse classs object 
#include<iostream>
using namespace std;

class point 
{
    public :
        virtual void draw()
        {
            cout<<"Point"<<endl; 
        }
};
class line :public point 
{
    public :
        void draw()
        {
            cout <<"Line"<<endl;
        }
};
class triangle : public point
{
    public :
        void draw()
        {
            cout <<"Triangle"<<endl;
        }
};
class polygon : public point 
{
    public :
        void draw()
        {
            cout<<"Polygon"<<endl;
        }
};
class circle : public point
{
    public :
        void draw()
        {
            cout <<"Circle"<<endl;
        }
};
int main()
{
    point pt;
    line ln;
    triangle tr;
    polygon py;
    circle cr;

    point *baseptr[]={&pt,&ln,&tr,&py,&cr} ;
    cout<<"Figure drawn by base pointer are :"<<endl;
    for(int i=0;i<5;i++)
    baseptr[i]->draw();

}