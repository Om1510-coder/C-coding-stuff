#include <stdio.h>
#include <ctype.h>
#include <string.h>

char give_shift(char x,int y);

int main()
{
    //printf("Hello World");
    char mystr[20];
    char solstr[20];
    printf("Please enter the word to be shifted: ");
    scanf("%s",&mystr);
    printf("The length of your word is: %ld\n",strlen(mystr));
    printf("Now enter the key for the shift cypher : ");
    int sk;
    scanf("%d",&sk);
    for(int i = 0;i<strlen(mystr);i++){
        solstr[i] = give_shift(mystr[i],sk);
    }
    printf("The shifted text is:\n");
    for(int j = 0;j<strlen(solstr);j++){
        printf("%c",solstr[j]);
    }
    //printf("%c",mystr[1]);
    return 0;
}


char give_shift(char x,int y){
    int d;
    char sol;
    //printf("Please enter a charachter");
    //scanf("%c",&x);
    //printf("\nPlease enter key to shift");
    //scanf("%d",&y);
    if(y>26){
        d = y/26;
        y = y - (26*d);
    }
    if((x == '-') || (x == '_') || (x == '.')||(x == '!')||(x==' ')||(((int)x>=40)&&((int)x<=57))){
        return x;
    }
    else{
    //printf("character value is : %c\n",x);
    //printf("ASCII value is : %d\n",x);
    //printf("ASCII value shifted : %d\n",x+y);
    //printf("character value is : %c\n",(int)x+y);
    if(isupper(x)){
        if(((int)x + y)>90){
            sol = (char)(((int)x + y)- 26); 
        }
        else{
            sol =  (char)((int)x + y);
        }
    }
    else{
        if(((int)x + y)>122){
            sol = (char)(((int)x + y)- 26);
        }
        else{
            sol = (char)((int)x + y);
        }
    }
    }
    //char sol =  (char)((int)x + y);
    //printf("\a");
    return sol;
}
