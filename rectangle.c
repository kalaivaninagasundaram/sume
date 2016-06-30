#include<stdio.h>
int main()
{
  int x1,y1,x2,y2;
  scanf("%d\n",&x1);
  scanf("%d\n",&y1);
  scanf("%d\n",&x2);
  scanf("%d\n",&y2);
  printf("%d,%d\n",x1,y1);
  printf("%d,%d\n",x1,y1+y2);
  printf("%d,%d\n",x1+x2,y1+y2);
  printf("%d,%d\n",x1+x2,y1);
  return 0;
}
