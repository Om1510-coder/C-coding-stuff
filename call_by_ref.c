/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swapper(int *x,int *y);

int main()
{
    printf("Hello World\n");
    printf("Enter first number:");
    int a;
    scanf("%d",&a);
    printf("Enter second number: \n");
    int b;
    scanf("%d",&b);
    swapper(&a,&b);
    printf("Now first number is : %d and second number is : %d",a,b);
    return 0;
}

void swapper(int *a,int *b){
    int temp;
    temp =*a;
    *a = *b;
    *b = temp;
}
