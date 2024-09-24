#include<stdio.h>
void main()
{
  int num; 
  printf("Type a number: \n"); // choose a number from 1-10
  scanf("%d",&num);
  if(num>5)
  {
    printf("option 1 it is!");
  }
  else if(num<5)
  {
    printf("Go with the second option!");
  }
  else
  {
    printf("oops! please select a value from 1-10");
  }
}
