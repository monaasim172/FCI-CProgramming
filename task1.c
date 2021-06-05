/*(Final Velocity) Write a program than asks the user to enter the initial
 velocity and acceleration of an object, and the time that has elapsed, places
  them in the variables u, a, and t, and prints the final velocity,
   v, and distance traversed, s, using the following equations.
a) 𝑣 = 𝑢 + 𝑎𝑡
b) 𝑠 = 𝑢𝑡 + 0.5 𝑎𝑡^2
*/

#include <stdio.h>
int main ()
{
   double u,a,t,v,x;
   printf("Enter the initial velocity");
   scanf("%lf",&u);
   printf("enter acceleration");
   scanf("%lf",&a);
    printf("Enter the time");
   scanf("%lf",&t);
   v=u+a*t;
   x=u*t+0.5*a*t*t;
   printf("the final velocity is : %lf and the distance is : %lf",v,x);

    return ;
    }

