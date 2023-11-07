
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
