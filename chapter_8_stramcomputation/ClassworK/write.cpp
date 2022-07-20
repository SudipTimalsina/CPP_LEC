// an Example of function write
 #include<iostream>
 #include<cstring>
using namespace std;

int main()
{
    char str[]="Gnu is not UNIX";
    for(int i;i<=strlen(str);++i)
    {
        cout.write(str,i);
        cout<<endl;
    }
    return 0;
}
