#include<stdio.h>
int main()
{
  int x,y,c,e,g,h;
  printf("\nEnter the x-coordinate of the left bottom vertex");
  scanf("%d",&x);
  printf("\nEnter the y-coordinate of the left bottom vertex");
  scanf("%d",&y);
  printf("\nEnter the length of a side");
  scanf("%d",&c);
  e=c/2;
  g=e+x;
  h=e+y;
  printf("\nThe centre of the room is at (%d,%d)",g,h);
  return 0;
}
