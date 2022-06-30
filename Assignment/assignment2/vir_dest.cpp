// example of virtual destructor
#include<iostream>
using namespace std;
class vehicle 
{
    public :
        vehicle()
        {
            cout<<"constructor of vehicle invoked "<<endl;
        }
    virtual void showdata()
    {
        cout <<"I am vehicle "<<endl;
    }
    virtual ~vehicle()
    {
        cout<<"Destructor of vehicle invoked"<<endl;
    }
};
class car : public vehicle{
    public :
        car()
        {
            cout<<"Constructor of car invoked"<<endl;
        }
        void showdata()
        {
            cout<<"I am car"<<endl;
        }
        ~car()
        {
            cout <<"Destructor of car invoked "<<endl;
        }
};
int main()
{
    vehicle *vp;
    cout<<"Base uses pointer pointing to base class object"<<endl;
    vp=new vehicle;
    vp->showdata();
    delete vp;
    cout<<"\nBase class pointer pointin to derived""class object"<<endl;
    vp=new car;
    vp->showdata();
    delete vp;
}