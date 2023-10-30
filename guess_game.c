#include <stdio.h>

unsigned long int next = 1;
unsigned long int gen;
int guess;

//guessing game, an extension of the game shown on brocode's channel, and the pseudo random generator by kernighan and ritchie in their book
int main()
{
    printf("Hello World\n");
    int inp_t;
    printf("Enter seed number\n");
    scanf("%d",&inp_t);
    next = inp_t;
    next = next*1103515245 + 12345;
    gen = ((next/65536)%32768);
    printf("Enter a guess\n");
    scanf("%d",&guess);
    while(guess!=gen){
        if(guess<gen){
            printf("Too low\n");
        }
        else{
            printf("Too high\n");
        }
        scanf("%d",&guess);
    }
    printf("You guessed it!");
    //return 0;
}
