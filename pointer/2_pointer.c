#include<stdio.h>

int main()
{
   int a=5;
   int* pc;
   pc=&a;
   // *pc=&a; error auxa
   *pc=a;//*pc la value linxa
   //pc=a; error aauxa
   printf("the value of a is %d",a);
   printf("the address of a is  %p" ,&a);
   printf("the address of a is  %d",pc);
   
return 0;

}