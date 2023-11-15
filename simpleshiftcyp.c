
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char give_shift(char x,int y);

int main()
{
    //printf("Hello World");
    char mystr[10];
    char solstr[10];
    printf("Please enter the word to be shifted: ");
    scanf("%s",&mystr);
    printf("The length of your word is: %d\n",strlen(mystr));
    printf("Now enter the key for the shift cypher : ");
    int sk;
    scanf("%d",&sk);
    for(int i = 0;i<strlen(mystr);i++){
        solstr[i] = give_shift(mystr[i],sk);
    }
    
    for(int j = 0;j<strlen(solstr);j++){
        printf("%c",solstr[j]);
    }
    //printf("%c",mystr[1]);
    return 0;
}


char give_shift(char x,int y){
    int d;
    if(y>26){
        d = y/26;
        y = y - (26*d);
    }
    //printf("character value is : %c\n",x);
    //printf("ASCII value is : %d\n",x);
    //printf("ASCII value shifted : %d\n",x+y);
    //printf("character value is : %c\n",(int)x+y);
    char sol =  (char)((int)x + y);
    return sol;
}
