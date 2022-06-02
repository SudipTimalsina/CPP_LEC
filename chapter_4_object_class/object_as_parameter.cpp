#include<iostream>
using namespace std;

class student{
    public :
    double mark;

    student(double mk)
    {
        mark=mk;
    }
};
void calculateaverage(student s1, student s2)
{
    double average=(s1.mark+s2.mark)/2;
    cout <<"The average mark of the students is : "<< average <<endl;

}
int main()
{
    student student1(300.5), student2(440);

    calculateaverage(student1,student2) ;
    return 0;
}