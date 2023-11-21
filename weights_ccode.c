#include <stdio.h>
#include <stdlib.h>


int ones_calc(int a);

int main()
{
    printf("Hello World");
    int x;
    int num_ones = 0;
    scanf("%d",&x);
    num_ones = ones_calc(x);
    int min_cnt = 2;
    int a = 0;
    for(int i = 0;i<100;i++){
        int vals = ones_calc(i);
        if(vals == num_ones){
            printf("%d ",i);
            int diff = abs(vals  - num_ones);
            if(diff<min_cnt){
                min_cnt = diff;
                a = i;
            }
        }
    }
    printf("\nLeast diff number is %d",a);
    return 0;
}

int ones_calc(int y){
    int nums_ones = 0;
    while(y){
        nums_ones = nums_ones + (y&1);
        
        y>>=1;
    }
    return nums_ones;
}
