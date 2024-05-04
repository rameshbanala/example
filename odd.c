#include<stdio.h>
void main()
{
    	printf("enter the number :");
	float n,i;
	scanf("%f",&n);
	for(i=1;i<=10;i++)
	{
		printf("%f % %f = %f\n",n,i,n%i);
	}
}