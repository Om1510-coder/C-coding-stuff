/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newnode(int dt){
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = dt;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void print_tree(struct node *N){
    if(N == NULL){
        return;
    }
    
    
    print_tree(N->left);
    print_tree(N->right);
    printf("%d ",N->data);
}

void dfs_fun_rt(int dt,struct node *h){
    int cnt =0;
    struct node *a = h;
    while(h->data != dt){
        h = h->right;
        cnt++;
    }
    

    int cntt = 0;
    while(a->data != dt){
        a = a->left;
        cntt++;
    }
   
        printf("%d",cntt);
    
   
        printf("%d",cnt);
    
   
}


int main()
{
    //printf("Hello World");
    struct node *head;
    head = malloc(sizeof(struct node));
    head ->data = 0;
    
    head->left = newnode(1);
    head->right = newnode(2);
    head->left->left = newnode(3);
    head->left->right = newnode(4);
    //head->right->left = newnode(5);
    head->right->right = newnode(6);
    print_tree(head);
    printf("Enter element to be found");
    int srch;
    scanf("%d",&srch);
    dfs_fun_rt(srch,head);
   
    //printf("Depth at which element is present is : %d",sol);
    
    return 0;
}


