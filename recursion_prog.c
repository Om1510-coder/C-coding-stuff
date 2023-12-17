
#include <stdio.h>

int facto_fun(int n){
    if(n==1){
        return 1;
    }
    return n*facto_fun(n-1);
}


int sum_func(int n){
    if(n==1){
        return 1;
    }
    return n+=sum_func(n-1);
}

int my_pow_func(int a, int exps){
    int val = 1;
    for(int i = 1;i<=exps;i++){
        val*=a;
    }
    return val;
}
int main()
{
    printf("Hello World");
    //int a = facto_fun(30);
    //printf("\n%d",a);
    int b = sum_func(5);
    printf("\n%d",b);
    int sol = my_pow_func(2,3);
    printf("\n%d",sol);
    return 0;
}
