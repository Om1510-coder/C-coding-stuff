#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    int flag = 1;
    
    printf("Enter the number to be checked\n");
    scanf("%d",&N);
    double rt = sqrt(N);
    int i;
    for(i=2;i<=rt;i++){
        if(N%i == 0){
            flag = 0;
        break;
    }
    }
    
    if(flag){
        printf("%d is a prime number",N);
    }
    else{
        printf("%d is not a prime number",N);
    }
}
// C code to find if a number is prime
//referred from geeks-for-geeks
