/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct mystruct{
    int x ;
    int y ;
    int sum_v;
    int diff;
    int mul_v;
    int div_v;
} ms;

int main()
{
    printf("Hello World\n");
    printf("Enter first number\n");
    scanf("%d",&ms.x);
    printf("Enter second number\n");
    scanf("%d",&ms.y);
    //ms.x = 100;
    //ms.y = 200;
    ms.sum_v = ms.x + ms.y;
    ms.diff = ms.x -  ms.y;
    ms.mul_v = ms.x*ms.y;
    ms.div_v = ms.x/ms.y;
    printf("Sum of the numbers is: %d\n",ms.sum_v);
    printf("Difference between the numbers is: %d\n",ms.diff);
    printf("Product of the numbers is: %d\n",ms.mul_v);
    printf("Division of a/b: %d",ms.div_v);
    return 0;
}
