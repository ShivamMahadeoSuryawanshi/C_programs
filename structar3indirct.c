#include<stdio.h>

struct student
{
  int marks;
  int age;
  char divi;
};

int main()
{
struct student amit;
struct student *ptr=NULL;

ptr=&obj;

ptr-> marks=90;
ptr->age=21;
ptr->divi='A';

  return 0;
}