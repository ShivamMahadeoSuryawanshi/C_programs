// Addtion of to number by function calling which is out side the main.
#include<stdio.h>

int Addition (int iValue1,int iValue2)
{
	int iOutput=0;
	
	iOutput=iValue1+iValue2;
	
	return iOutput;
	
 }	

int main()
{
	int iNo1=10;
	int iNo2=11;
	int iAns=0;
	
	iAns=Addition(iNo1,iNo2);
	
	printf("add is%d\n",iAns);
	
	return 0;
}	
	
	