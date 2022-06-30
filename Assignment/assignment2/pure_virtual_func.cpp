// use of virtual function 
#include<iostream>
#include<cstdlib>
using namespace std;
class parallelogram
{
    protected :
        float length;
        float breadth;
    public :
        parallelogram(){length=0;breadth=0;}
        parallelogram(float l,float b)
        {
        length=l;breadth=b;
        }
        virtual float perimeter()
        {
            return 2*(length+breadth);
        }
        virtual float area()=0;
};
class rectangle : public parallelogram
{
    public :
        rectangle(){};
        rectangle (float l,float b):parallelogram(l,b){}
        float area()
        {
            return length*breadth;
        }
};
int main()
{
    parallelogram *pgm;
        // pointer to abstract base class paralleloram
    rectangle rec(2.5,7.9);
    pgm=&rec; //assign address of the derived class object to base class pointer
    cout <<"Perimeter="<<pgm->perimeter()<<endl;
                // perimeter() of base class is called
    cout <<"Area="<<pgm->area();
                // area() of derived class is called
    return 0;
}