#include<stdio.h>
int main()
{
    int a,b,l;
    float d,c;
    printf("\nEnter the length of the bed");
    scanf("%d",&l);
    printf("\nEnter the width of the bed");
    scanf("%d",&b);
    printf("\nEnter the cost per sqm (in dollars)");
    scanf("%f",&d);
    a=l*b;
    printf("\nThe quantity of cover needed is %dsqm",a);
    c=a*d*100;
    printf("\nThe cost of the cover in cents is %.2f",c);
    return 0;
    }
