#include<iostream>
using namespace std;

template<class t1,class t2>
void testfunction(t1 a,t2 b){
    cout <<a<<" "<<b<<endl;
}

int main()
{
    int inum=5;
    float fnum=5.5;
    testfunction(inum,fnum);
    // equivalent to testfunction<int,float>(inum,fnum)
    testfunction(20,"Let's go to the place beyond time and time beyond counting!" );
    // equivalent to testfunction<int ,string>(inum ,char) 
    return 0;
}