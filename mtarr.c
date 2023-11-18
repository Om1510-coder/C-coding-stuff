/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    printf("Hello World");
    int size;
    scanf("%d",&size);
    int my_arr[size];
    for(int i = 0;i<size;i++){
        scanf("%d",&my_arr[i]);
    }
    printf("Output : \n");
    int sm = 0;
    for(int j = 0;j<size;j++){
        printf("%d ",my_arr[j]);
        sm = sm + my_arr[j];
    }
    printf("\nSum is : %d\n",sm);
    int temp = 0;
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            if(my_arr[j]>my_arr[i]){
                temp = my_arr[i];
                my_arr[i] = my_arr[j];
                my_arr[j] = temp;
            }
        }
    }
    printf("\n");
    for(int j = 0;j<size;j++){
        printf("%d ",my_arr[j]);
        sm = sm + my_arr[j];
    }
    //0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1
    printf("Searching for an element");
    int sc;
    scanf("%d",&sc);
    int str = 0;
    int en = size - 1;
    
    while(str<=en){
        int mid = str + (en - str)/2;
        if(my_arr[mid] == sc){
            printf("%d",mid);
            return 0;
        }
        else{
            if(sc<my_arr[mid]){
                en = mid - 1;
            }
            else{
                str = mid + 1;
            }
        }
    }
    
    return 0;
}
