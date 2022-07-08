#include<iostream>
using namespace std;

const int MAX=20;
template<class t>
class queue{
    private :
        t arr[MAX];
        int rear;
    public :
        queue();
        void add(t data);
        t remove();
        int size();
};
template<class t>
    queue<t>::queue()
    {
        rear=0;
    }
template <class t>
    void queue<t>::add(t data)
    {
        if (rear>=MAX)
            cout<<"the queue is full";
        else 
            arr[rear++]=data;
    }
template<class t>
t queue<t>::remove()
{
    t front;
    if(rear==0)
        cout <<"Queuq is empty";
    else{   
        front=arr[0];
        rear--;
        for (int i=0;i<rear;++i)
            arr[i]=arr[i+1];
    }
    return front;
}
template<class t>
int queue<t>::size()
{
    return(rear);
}
int main()
{
    cout <<"queue for intiger"<<endl;
    queue<int > q1;
    q1.add(11);
    q1.add(22);
    q1.add(33);
    cout <<"The size od queue before removing is :"<<q1.size()<<endl;
    cout <<"Item removed from queue "<<q1.remove()<<endl;
    cout <<"size of queue after one removal is :"<<q1.size()<<endl;

    cout <<"\nFor floating point number"<<endl;
    queue <float> q2;
    q2.add(1.1);
    q2.add(2.2);
    cout <<"size before removal :"<<q2.size()<<endl;
    cout <<"The removed value is :"<<q2.remove()<<endl;
    cout <<"size After removal :"<<q2.size()<<endl;

    cout <<"\nQueue for character"<<endl;
    queue <char> q3;
    q3.add('A');
    q3.add('B');
    q3.add('C');
    q3.add('D');
    cout <<"size before removal :"<<q3.size()<<endl;
    cout <<"The removed value is :"<<q3.remove()<<endl;
    cout <<"The removed value is :"<<q3.remove()<<endl;
    cout <<"size After removal :"<<q3.size()<<endl;
    return 0;
 }