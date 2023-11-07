
#include <stdio.h>
int prime_finder(int q);
int main()
{
    int i;
    int count = 0;
    //printf("Hello World");
    printf("Enter a number :");
    scanf("%d",&i);
    printf("The prime factors of the number are: \n");
    int ab;
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
            }
            else{
                
            }
        }
        
        
        
        
    }
    }
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
