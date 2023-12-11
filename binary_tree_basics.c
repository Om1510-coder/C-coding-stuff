/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};
struct node* newnode(int data_in);
void print_inorder(struct node *N);
void print_preorder(struct node *N);
void print_postorder(struct node *N);
int depth_finder(struct node *N);


int main()
{
    struct node *head;
    head  = malloc(sizeof(struct node));
    head->data = 0;
    
    printf("Please enter the data of left node : ");
    int ldata;
    scanf("%d",&ldata);
    struct node *left_x = newnode(ldata);
    head->left = left_x;
    
    printf("Please enter the data of right node : ");
    int rdata;
    scanf("%d",&rdata);
    struct node *right_x = newnode(rdata);
    head->right = right_x;
    
    left_x->left = newnode(3);
    left_x->right = newnode(4);
    right_x->left = newnode(5);
    right_x->right = newnode(6);
    
    printf("This is inorder traversal : ");
    print_inorder(head);
    printf("\nThis is preorder traversal : ");
    print_preorder(head);
    printf("\nThis is postorder traversal : ");
    print_postorder(head);
    int depthh = depth_finder(head);
    printf("\nThe depth of the tree is : %d",depthh);
    
    return 0;
    
    
}

struct node* newnode(int data_in){
    struct node *temp = NULL;
    temp = malloc(sizeof(struct node));
    temp ->data = data_in;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void print_inorder(struct node *N){
    if(N == NULL){
        return;
    }
    print_inorder(N->left);
    printf("%d ",N->data);
    print_inorder(N->right);
}

void print_preorder(struct node *N){
    if(N == NULL){
        return;
    }
    printf("%d ",N->data);
    print_inorder(N->left);
    print_inorder(N->right);
}

void print_postorder(struct node *N){
    if(N == NULL){
        return;
    }
    
    print_inorder(N->left);
    print_inorder(N->right);
    printf("%d ",N->data);
}

int depth_finder(struct node *N){
    int cnt = 0;
    while(N != NULL){
        N = N ->left;
        cnt++;
    }
    return cnt;
}




