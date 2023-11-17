#include <stdio.h>

int main()
{
    printf("Hello World");
    int inp;
    scanf("%d",&inp);
    for(int i = 0;i<inp;i++){
        for(int j = (inp-i);j>0;j--){
            printf(" ");
        }
        for(int k = 0;k < (2*i)+ 1;k++){
            
            printf("*");
            
        }
        printf("\n");
        
    }
    
    return 0;
}
