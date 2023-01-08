// print value of auto int,register int and static int.
#include<stdio.h>

int A=10;

void fun()
{
	
	auto int B=20;
	register int D=20;
	static int E=20;
	
	B++;
	D++;
	E++;
	
	printf("value of auto%d\n",B);
	printf("value of register%d\n",D);
	printf("value of static%d\n",E);
}

int main()
{
	int c=30;
	fun();
	fun();
	fun();
	
	return 0;
}