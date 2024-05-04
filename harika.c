#include<stdio.h>
void main()
{
  int a,b;
  printf("enter the values of a,b:");
  scanf("%d%d",&a,&b);
  if(a==b)
  {
   printf("entered values are equal");
  }
  
   if(a>b)
    {
    printf("%d is greater than %d",a,b);
   }
   
   if(a<b)
   {
    printf("%d is less than %d",a,b);
   }
 
}
 