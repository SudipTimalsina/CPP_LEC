#include<iostream>
using namespace std;

class parent{
protected :
int id_protected;

};

class child : public parent 
{
    public :

    void setid(int id)
    {
        id_protected = id;
    }
    void displayid()
    {
        cout <<"Id protected is : " <<id_protected <<endl ;
    }
};
int main()
{
    child obj;

    obj.setid(44);
    obj.displayid();

    return 0;
}