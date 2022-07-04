
#include <iostream>
using namespace std;

class sum
{
private:
    int real, img;

public:
    sum(int a = 0, int b = 0)
    {
        real = a;
        img = b;
    }

    void display()
    {
        cout << "sum of real part = " << real << endl;
        cout << "sum of imaginary part = " << img << endl;
    }

    friend sum operator+(sum s1, sum s2);
};

sum operator+(sum s1, sum s2)
{
    sum temp;
    temp.real = s1.real + s2.real;
    temp.img = s1.img + s2.img;
    return temp;
}

int main()
{
    sum s1(2, 3);
    sum s2(4, 1);
    sum s3 = s1 + s2;
    s3.display();
}