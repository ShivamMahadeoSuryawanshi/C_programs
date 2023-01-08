#include<stdio.h>

enum days {mon,tues,wed,thurs};

int main()
{
	
  enum days obj;
  
  int salary[]={20,30,40,50};
  
  printf("size of enum %d\n",sizeof(obj));
  printf("mon %d\n",mon);
  printf("tues %d\n",tues);
  printf("wed %d\n",wed);
  printf("thurs %d\n",thurs);
  
  printf("my sala wed%d\n",salary[2]);
  printf("my sala wed%d\n",salary[wed]);
  
  
  
  
  return 0;
}