/*4. Problem statement: Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter it belongs. (Softcopy)
Output Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
Output "Origen" If the point is at the origin.
Output "X-axis" If the point is over X axis.
Output "Y-axis" if the point is over Y axis
*/
#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter the x number");
  scanf("%d",&x);
  printf("Enter the y number");
  scanf("%d",&y);
  if(x==0 &&y==0)
    printf("origin");
   else if(y==0)
    printf("X-axis");
   else if(x==0)
     printf("y-axis");
    else if(x>0 &&y>0)
        printf("the point in q1");
    else if(x<0 &&y>0)
        printf("the point in q2");
    else if(x<0 &&y<0)
        printf("the point in q3");
    else
        printf("the point in q4");

    return 0;
}

