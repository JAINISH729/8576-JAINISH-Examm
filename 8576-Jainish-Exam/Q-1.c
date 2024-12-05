#include<stdio.h>
void main()
{
    int a,b,sum;

    printf("Enter first angle :");
    scanf("%d",&a);
    printf("Enter second angle :");
    scanf("%d",&b);

    sum = 180 - a - b;
    printf("third angle is %d",sum);
}