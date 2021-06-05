/*(Table of Squares and Cubes) Using only the
techniques you learned in this chapter, write a program
 that calculates the squares and cubes
 of the numbers from 0 to 10 and uses
 tabs to print the following table of values:
*/
#include<stdio.h>
int main()
{
    int x;

    /* Print column names */
    printf("Number\tSquare\tCube\n");

    for(x=0; x<=10; x++)
        printf("%d\t%d\t%d\n", x, x*x, x*x*x);

    return 0;
}
