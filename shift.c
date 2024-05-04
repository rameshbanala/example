#include<stdio.h>
void main()
{
  int a,b;
  printf("enter the value of a:");
  scanf("%d%d",&a,&b);
  printf("value of %d before the shift");
  a=b<<3;
  printf("value of %d after the shift");
} 
 