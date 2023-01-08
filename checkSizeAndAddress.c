//program to check the size of each data type and address of that data.

/*
    Steps to Develop the application
    Steps1: Understand the problem statement
    Steps2: Write the algorithm
    Steps3: Decide the programming language
    Steps4: Write the program
    Steps5: Test the program
*/

//Accept the N numers from user and perform addition

//Input
//int i=5;

//Expected Output
//size of int is :-4
//addres of int is:-6356760
//Address of int in hexadecimal format :- 0060FF1F

//Algorithm
/*
    START
        Accept the number of elements from user
        Allocate the memory to store that number
        Accept the numbers from user
        Perform Addition of all numbers
        Display the Addition
    END
*/


#include<stdio.h>

////////////////////////////////////
//
// Application Name : check the size of each data type and address of that data.
// Input : data of any data type
// Output : size and address
// Author : Shivam mahadeo suryawanshi
// Date : 08-01-2023
//
/////////////////////////////////////

int main()
{
      char ch='A';
      int i=11;
	  float f=3.14;
	  double d=9.567;
	  
	  printf("--------values for the variables are-------=\n");
	  printf("values for the char is :- %c\n",ch);
	  printf("values for the int is :- %d\n",i);
	  printf("values for the float is :- %f\n",f);
	  printf("values for the double is :- %lf\n",d);
	  
	  printf("-\n");
	   printf("-\n");
	  
	  printf("------------size of each variable--------\n");
	  printf("size of char :- %d\n",sizeof(ch));
	  printf("size of int :- %d\n",sizeof(i));
	  printf("size of float :- %d\n",sizeof(f));
	  printf("size of double:-  %d\n",sizeof(d));
	  
	   printf("-\n");
	    printf("-\n");
		
	  printf("--------Address of each variable----------\n");
	  printf("Addres of char is:- %d\n",&ch);
	  printf("Addres of int is:- %d\n",&i);
	  printf("Addres of float is:- %d\n",&f);
	  printf("Addres of double is:- %d\n",&d);
	  
	   printf("-\n");
	    printf("-\n");
	  
	  printf("--------Address of each variable in hexadecimal format----------\n");
	  printf("Address of char in hexadecimal format :- %p\n",&ch);
	  printf("Address of int in hexadecimal format :- %p\n",&i);
	  printf("AAddress of float in hexadecimal format :-  %p\n",&f);
	  printf("Address of double in hexadecimal format :- %p\n",&d);



     return 0;
}