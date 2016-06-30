#include<stdio.h>
int main()
{
 int centerx,centery,leftx,lefty,rightx,righty,side;
 scanf("%d%d%d",&centerx,&centery,&side);
  leftx=centerx-(side/2);
  lefty=centery-(side/2);
  rightx=centerx+(side/2);
  righty=centery+(side/2);
  printf("%d,%d\n",rightx,righty);
  printf("%d,%d\n",rightx,lefty);
  printf("%d,%d\n",leftx,lefty);
  printf("%d,%d\n",leftx,righty);
  return 0;
}
