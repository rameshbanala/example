#include<stdio.h>
void main()
{
  /*char a,e,i,o,u,op;
   printf("enter op:");
   scanf("%c",&op);
   if(op=a,e,i,o,u)
   {
	printf("vowels");
   }
	else
	{
	printf("consonents");
	}*/
	char op;
	printf("enter the character");
	scanf("%c",&op);
	if(op == 'a'  || op == 'e' || op =='i'  || op =='o'  ||op =='u' )
	{
	printf("vowels");
	}
	else
	{
	printf("consonents");
	}
}