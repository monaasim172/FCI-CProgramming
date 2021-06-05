/*3. Write program that reads an input 𝑥. If 𝑥 is
even output “EVEN” otherwise output “ODD”*/

#include <stdio.h>

int main()
{
    double x;
    printf("Enter the number");
    scanf("%lf",&x);
    if (x>0)
        printf("the number is EVEN");
    else
        printf("the number is ODD");


  return 0;
}

