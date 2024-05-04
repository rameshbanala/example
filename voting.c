#include<stdio.h>
void main()
{
  int a,age;
  printf("enter your age:");
  scanf("%d",&age);
   if(age<=18)
   {
    printf("YOU ARE ELIGIBLE NOT VOTING");
    }
   else
   {
   printf("YOU ARE ELIGIBLE FOR VOTING");
   }
}