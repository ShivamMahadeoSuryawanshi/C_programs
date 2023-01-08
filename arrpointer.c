//call the array using pointer.

#include<stdio.h>

int main()
{
   int Arr[4]={10,20,30,40};
   
   int *p=&(Arr[0]);
   int *q=&(Arr[3]);
   
   printf("%d\n",Arr[0]); //to see the first element of the array Arr
   printf("%d\n",*p);      // call to line number 9.
   printf("%d\n",Arr[3]);  //the fourth element of the array Arr.
   printf("%d\n",*q);      // call to line number 10
   

   return 0;
}  