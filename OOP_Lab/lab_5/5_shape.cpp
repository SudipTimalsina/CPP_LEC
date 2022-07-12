#include<iostream>
using namespace std;
class shape{
    protected:
        double base,height;
    public:
        void get_data(){
            base=0;
            height=0;
        }
        virtual void display_area(){
            cout<<"Area: "<<endl;
        }
};
class triangle: public shape{
    public:
    triangle(double a, double b){
        base = a;
        height = b;
    }
        void display_area(){
            double area = (0.5)*base*height;
            cout<<"Area of triangle is: "<<area<<endl;
        }
};
class rectangle: public shape{
    public:
    rectangle(int a, int b){
        base = a;
        height = b;
    }
        void display_area(){
            double area = base*height;
            cout<<"Area of rectangle is: "<<area<<endl;
        }
};
int main(){
    triangle t(4,5);
    t.display_area();
    rectangle r(2,3);
    r.display_area();
}