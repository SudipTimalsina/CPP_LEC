// WAP to calculate area and volume of room.
#include<iostream>
using namespace std;

class room{
public :
int Length ;
int Breadth ;
int height ;

int calculatearea()
{
    return Length*Breadth ;
}
int calculatevolume()
{
    return Length*Breadth*height;
}
 };

 int main()
 {
     room room1 ;
     room1.Length=5;
     room1.Breadth=6;
     room1.height=3;
     cout << "The Area of the room is : "<< room1.calculatearea()<<" sq.units" << endl;
     cout << "The volume of the room is : "<<room1.calculatevolume()<<" cu.unit"<<endl;
     return 0;
    
     }
