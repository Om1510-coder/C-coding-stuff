#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[50];
    printf("enter a string: \n");
    fgets(str, 50, stdin);
    //scanf("%s",str);
    printf("%s",str);
    int len = 0;
    len = strlen(str);
    int caps=0;
    int not_caps = 0;
    int whitespaces = 0;
    printf("\n The length of the string is : %d\n",len);
    for(int i = 0;i<strlen(str);i++){
        printf("%d ",str[i]);
        if(str[i]==32){
            whitespaces++;
        }
        else{
        if(str[i]<97){
            caps++;
        }
        else{
            not_caps++;
        }
        }
    }
    
    printf("\nThe number of upper case stuff is : %d",caps);
    printf("\nThe number of lower case stuff is : %d",not_caps);
    printf("\nThe number of whitespaces are : %d",whitespaces);
    
    
    return 0;
}
