#include<iostream>
using namespace std;

class school{
public :
int a ;

school(int x){
a=x;
cout <<"The value is x = "<< a<<endl ;

}

};
int main ()
{
  school s1(5);
  cout <<"the values is : " <<s1.a <<endl ;
  return 0;
}
