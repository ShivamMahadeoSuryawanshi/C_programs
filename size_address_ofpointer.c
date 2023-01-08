#include<stdio.h>


int main()
{
   int no=11;

   int *p=&no;
   
   printf("value of int is :- %d\n",no);
   printf("value of pointer is (pointer store the address of that varible which is pointing to) :- %d\n",p);

   printf("Address of int is :- %d\n",&no);
   printf("addres of pointer is :- %d\n",&p);

   printf("size of int is :- %d\n",sizeof(no));
   printf("size of pointer is :- %d\n",sizeof(p));
   
   return 0;
}