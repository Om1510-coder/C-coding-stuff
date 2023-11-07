
#include <stdio.h>
int prime_finder(int q);
int is_odd(int z);
int main()
{
    int i;
    int count = 0;
    int odd_cnt = 0;
    int even_cnt = 0;
    int prd_pn = 1;
    //printf("Hello World");
    printf("Enter a number :");
    scanf("%d",&i);
    printf("The prime factors of the number are: \n");
    int ab;
    int sum_pn = 0;
    ab = prime_finder(i);
    if(ab == 1){
        printf("You just found a prime number");
    }
    else{
    for(int j=2;j<=i;j++){
        if(i%j==0){
            //printf("%d ",j);
            int storer = 0;
            storer = prime_finder(j);
            if(storer == 1){
                printf("%d\n",j);
                sum_pn= sum_pn+j;
                prd_pn=prd_pn*j;
                if(is_odd(j)){
                    odd_cnt++;
                }
                else{
                    even_cnt++;
                }
            }
            else{
                
            }
        }
    }
    }
    printf("\n");
    printf("The sum of the prime factors is :%d\n",sum_pn);
    printf("The product of the prime factors is :%d\n",prd_pn);
    printf("Number of odd prime factors: %d\n",odd_cnt);
    printf("Number of even prime factors: %d\n",even_cnt);
    return 0;
}

int prime_finder(int n){
    int k;
    int flag = 1;
    for(k=2;k<=n/2;k++){
        if(n%k == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int is_odd(int q){
    if(q%2 != 0){
        return 1;
    }
    else{
        return 0;
    }
}
