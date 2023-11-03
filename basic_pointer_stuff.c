//a bit about pointers
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int *x;
    int j;
    scanf("%d",&j);
    x = &j;
    printf("%d\n",x);//this will return the address
    printf("%d\n",*x);//this returns the original value of x
    x++;
    printf("%d\n",x);//the adress so returned is incremented by the size of the pointer i.e. int => 4
    printf("%d\n",*x);//this will again print the incremented adress because x points absolutely nowhere now
    x = &j;
    ++(*x);
    printf("  \n");
    printf("%d\n",x);//
    printf("%d\n",*x);//now the actual value of j is incremented because we have used ++(*x) the * operator will access the memory shown by the pointer adress
    return 0;
}
//sources: gfg pointer arithmetic, c language book
