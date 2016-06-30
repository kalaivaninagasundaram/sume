#include<stdio.h>
#include<math.h>
    int main()
    {
       float Ax,Bx,Cy,Ay,By,Cx,AB,BC,CA;
       printf("x-coordinate of vertex A\n");
       scanf("%f",&Ax);
       printf("y-coordinate of vertex A\n");
       scanf("%f",&Ay);
       printf("x-coordinate of vertex B\n");
       scanf("%f",&Bx);
       printf("y-coordinate of vertex B\n");
       scanf("%f",&By);
       printf("x-coordinate of vertex C\n");
       scanf("%f",&Cx);
       printf("y-coordinate of vertex C\n");
       scanf("%f",&Cy);
       AB=sqrt((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By));
       BC=sqrt((Bx-Cx)*(Bx-Cx)+(By-Cy)*(By-Cy));
       CA=sqrt((Cx-Ax)*(Cx-Ax)+(Cy-Ay)*(Cy-Ay));
       printf("Length of side AB is %.1f",AB);
       printf("\nLength of side BC is %.1f",BC);
       printf("\nLength of side AC is %.1f",CA);
       return 0;
       }
