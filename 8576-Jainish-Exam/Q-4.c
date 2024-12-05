// formula = 4/3*pi*r^3

#include<stdio.h>
void main()
{
    int r;
    float pi, formula;

    printf("Enter r ");
    scanf("%d",r);

    pi = 3.14;
    
    formula =  (4/3 * pi * r * r * r);

    printf("answer is %.2f",formula);
}