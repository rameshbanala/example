#include<stdio.h>
void main()
{
   //even number 
	//n number input
	//n%2 == 0 ==>even
	//n%2 != 0 ==> odd
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	/* 
	if(n%2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}*/
	switch(n%2)
	{
		case 0:
			printf("even");
			break;
		default:
			printf("odd");
			break;
			
	}
}