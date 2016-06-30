#include<stdio.h>
int main()
{
  char d[50];
  float d1,d2;
  printf("\nEnter event :");
  scanf("%s",d);
  printf("\nEnter Start Time :");
  scanf("%f",&d1);
  printf("\nEnter End Time :");
  scanf("%f",&d2);
  printf("\n%s : %.2f AM to %.2f PM",d,d1,d2);
  return 0;
}
