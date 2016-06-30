#include<stdio.h>
int main()
{
  char a[50],b[50],c[50];
  printf("\nEnter Details :");
  printf("\nEnter Flight Name :");
  scanf("%s",a);
  printf("\nEnter Starting Location :");
  scanf("%s",b);
  printf("\nEnter Ending Location :");
  scanf("%s",c);
  printf("\nTravel Details :");
  printf("\nThe flight %s starts from %s and reaches %s.",a,b,c);
  return 0;
}
