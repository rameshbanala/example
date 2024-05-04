#include<stdio.h>
void main()
{
  int n;
  printf("enter the Roll:");
  scanf("%d",&n);
  switch (n)
    {
   case 1:
     printf("ramesh");
     break;
   case 2:
	printf("harika");
  	break;
    case 3:
	printf("bhaskar");
      break;
     case 4:
	printf("lakshmi");
	break;
     default:
	printf("invalid roll");
      break;
   }
}