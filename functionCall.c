// Print the data by calling the function which is out side the main .

#include<stdio.h>

void demo()
{
    auto int A=10;
	A++;     //increment of int.
	printf("value from demo is %d\n",A);
}

int main()
{
    demo(); // function call.
	
	demo();
	
	return 0;
}
