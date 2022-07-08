#include<iostream>
using namespace std;

template< class t ,int size>
    class array{
        private :
            t arr[size];
        public :
        void get_array();
        t find_max();
        t find_min();
    };
template<class t,int size>
void array<t,size>::get_array(){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
template<class t,int size>
t array<t,size>::find_max(){
    t max=arr[0];
    for( int i=1;i<size;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
template<class t,int size>
t array<t,size>::find_min(){
    t min=arr[0];
    for( int i=1;i<size;i++)
    {
        if(arr[i]<min)
            min=arr[i];     
    }
    return min;
}
int main()
{
    array<int ,5> a1;
    cout <<"Enter the value of the arrays :"<<endl;
    a1.get_array();
    cout<<"The maximum value is :"<<a1.find_max()<<endl;
    cout<<"The minimum value is :"<<a1.find_min()<<endl;
}