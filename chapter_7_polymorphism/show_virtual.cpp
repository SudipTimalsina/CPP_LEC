// use abstract class and access them using base class pointer
#include<iostream>
using namespace std;

class media{
    protected :
        char title[25],pub[25];
    public :
        virtual void readdata();
        virtual void showdata()=0;
};
void media ::readdata()
{
    cout <<"Enter title: ";cin>>title;
    cout <<"Enter publication:";cin>>pub;
}
class book : public media
{
    private :
        int no_of_pages;
    public :
        void readdata();
        void showdata();
};
void book ::readdata()
{
    media::readdata();
    cout <<"Enter the number of pages: ";
    cin>>no_of_pages;
}
void book ::showdata()
{
    cout <<"***Data on book***"<<endl;
    cout <<"Title of book: "<<title<<endl;
    cout <<"Publication of book :"<<pub<<endl;
    cout <<"No of pages :"<<no_of_pages<<endl;
}
class dvd :public media{
    private :
        int dur;
    public :
        void readdata();
        void showdata();
};
void dvd ::readdata()
{
    media::readdata();
    cout <<"Enter the time duration of DVD"<<endl;
    cin>>dur;
}
void dvd ::showdata()
{
    cout<<"\n***Data on DVD***"<<endl;
    cout <<"Title of dvd "<<title<<endl;
    cout <<"publication of DVD"<<pub<<endl;
    cout <<"Time duration of DVD"<<dur<<endl;
}
int main()
{
    media *md;
    book bk;
    md=&bk;
    cout <<"Enter data on Book"<<endl;
    md->readdata();
    md->showdata();

    dvd dv;
    md=&dv;
    cout <<"Enter data on dvd"<<endl;
    md->readdata();
    md->showdata();
    return 0;
}