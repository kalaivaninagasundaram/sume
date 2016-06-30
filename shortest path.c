#include<stdio.h>
#include<math.h>
int main()
{
  float length,width,height,distance;
  printf("Enter the length\n");
  scanf("%f",&length);
  printf("Enter the  width\n");
  scanf("%f",&width);
  printf("Enter the  height\n");
  scanf("%f",&height);
  distance=height+(sqrt((length*length)+(width*width)));
  printf("The Shortest distance is %.2f",distance);
  return 0;
}
