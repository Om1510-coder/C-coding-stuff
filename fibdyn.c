#include <stdio.h>

int main()
{
    printf("Hello World\n");
    printf("Enter the nth fib number you want : ");
    int inp;
    scanf("%d",&inp);
    int my_arr[inp+2];
    if(inp == 0){
        printf("%d",inp);
    }
    if(inp == 1){
        printf("%d",inp);
    }
    else{
    my_arr[0] = 0;
    my_arr[1] = 1;
    for(int i = 2;i<=inp;i++){
        my_arr[i] = my_arr[i-1] + my_arr[i-2];
    }
    printf("%d",my_arr[inp]);
    }
    return 0;
}
