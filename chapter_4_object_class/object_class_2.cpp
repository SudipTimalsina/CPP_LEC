// WAP to calculate area and volume of room again (copied from 0bject class 1) .
#include<iostream>
using namespace std;

class room{
private :

int Length ;
int Breadth ;
int height ;
 
 public :
 void setValues(int a, int b, int c)
 {
    Length = a;
    Breadth = b ;
    height = c; 
 }
int calculatearea()
{

    return Length*Breadth ;
}

int calculatevolume()
{
    return Length*Breadth*height ;
}
 };

 int main()
 {
     room room1 ;
     room1.setValues(5,4,2);
     cout << "The Area of the room is : "<< room1.calculatearea()<<" sq.units" << endl;
     cout << "The volume of the room is : "<<room1.calculatevolume()<<" cu.unit"<<endl;
     return 0;
    
     }
