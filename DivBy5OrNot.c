////////////////////////////////////////////////
//
//Problam statemenr:=Accept number from user and check whethe it is divisibal by 5 or not.
//
// input :- 50.
// output:- No is divisibal by 5.
/////////////////////////////////////////////////
//
// step to follow whill program
//
// step 1 :- understand the problam satatment
// step 2 :- write the alogoritum
// step 3 :- decide the programing language
// step 4 :- write the program
// step 5 :- test the program
//
////////////////////////////////////////////////
//
// Alogorithem
//
/*
    START
	 Accept number from user as NO
         divide that No by 5 and check the  value of remainder
         if the valuse id 0 
         than dispaly as No is divisibal ny 5
	 otherwise
         dispaly as NO is not divisibal by 5
    END				 
*/




#include<stdio.h>

int DivisibleByFive(int iNo)
{
	int iAns=0;
	iAns =iNo %5;
	
	  if(iAns==0)
	  {
		  return 1;
	  }
	  else
	  {
		  return 0;
	  }	  
	}

int main()          // Entry point of the appltction
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number to chek it is divisible by 5 or not. \n");
	scanf("%d",&iValue);
	
	iRet =DivisibleByFive(iValue);
	if(iRet ==0)
	{
		printf("%d is not divissible by 5. \n",iValue);
	}
	else
	{
		printf("%d is  divissible by 5. \n",iValue);
	}
	
  return 0;
}
