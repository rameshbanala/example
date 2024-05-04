#include<stdio.h>
int pow(float a,int p)
{
    float result = 1;
    for(int i = 0;i<p;i++)
    {
        result = result * a;
    }
    return result;
}
int main()
{
    int a;
    printf("enter a number  :");
    scanf("%d",&a);
    printf("enter the power to that number: ");
    int p;
    scanf("%d",&p);
    int result = pow(a,p);
    printf("%d",result);
}