// check the size and bass addres of the given array. and print the element od aaray .

#include<stdio.h>

int main()
{
  int arr[5]={10,20,30,40,50};
   int i=0;

printf("Element of array are :- ");
  for(i = 0; i < 5; i++) 
   {
     printf("%d ", arr[i]);
   }

   printf("\n");

  printf("Base address of array is :- %p\n",arr);  // we can check the addres of array just using name of array
  printf("Base address of array is :- %p\n",&arr);  // as well as the & operter can be use to check the addres so out put we be same in both the case.
  printf("size of array is :- %d",sizeof(arr));
  
  return 0;

}