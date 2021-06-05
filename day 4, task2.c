/*An elephant decided to visit his friend. It turned out
 that the elephant's house is located at point 0 and
  his friend's house is located at point x,  where x > 0,
   of the coordinate line. In one step the elephant
    can move 1, 2, 3, 4 𝑜𝑟 5 positions forward.
    Determine, what is the minimum number of steps he needs
     to make in order to get to his
      friend's house. (Solve using if statements) */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int distance ,steps , min_steps; // steps : خطوات الفيل في المرة الواحدة ,min steps : اقل عدد خطوات يخطوها الفيل
  printf("Enter the distance ");
  scanf("%d",&distance);
  printf("Enter the elephant steps ");
  scanf("%d",&steps);
  min_steps = distance/ steps;
  if (distance%steps!=0)
  min_steps++;
  printf("the the minimum number of steps he needs is %d",min_steps);
    return 0;
}
