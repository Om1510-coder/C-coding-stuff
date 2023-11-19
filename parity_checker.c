#include <stdio.h>

int main()
{
    printf("Hello World");
    int x;
    int num_bits = 0;
    scanf("%d",&x);
    int ones_cnt;
    int even_cnt;
    while(x){
        if(x & 1){
            ones_cnt++;
        }
        else{
            even_cnt++;
        };
        x>>=1;
        
        //printf
    }
    
    if(ones_cnt%2!=0){
        printf("Odd parity\n");
    }
    else{
        printf("Even parity\n");
    }
    printf("\nNumber of ones are : %d",ones_cnt);
    printf("\nNumber of zeros are : %d",even_cnt);
    return 0;
}
