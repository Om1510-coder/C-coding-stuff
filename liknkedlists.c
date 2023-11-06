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
    struct node*next;
    struct node*prev;
};

void printlist(struct node *p);
void printlistrev(struct node *q);
int search_ele(int x,struct node *r);
void replace_ele(int y,struct node *s,int rep);
void conv_to_array(int arr[3],struct node *d);
int main()
{
    struct node *head;
    head = malloc(sizeof(struct node));
    struct node *ele_one = NULL;
    head->prev = NULL;;
    head->data = 3;
    ele_one = malloc(sizeof(struct node));
    ele_one -> prev = head;
    head -> next = ele_one;
    ele_one -> data = 1;
    struct node *ele_two = NULL;
    ele_two = malloc(sizeof(struct node));
    ele_two -> prev = ele_one;
    ele_one ->next = ele_two;
    ele_two -> data = 2;
    ele_two ->next = NULL;
    printf("Hello World\n");
    printf("Doubly linked list in forward order: ");
    printlist(head);
    printf("\n");
    printf("Doubly linked list in reversed order:");
    printlistrev(ele_two);
    printf("\n");
    printf("Please enter the value to be searched");
    int x;
    scanf("%d",&x);
    int sol;
    sol = search_ele(x,head);
    printf("\n");
    printf("Element %d found at position : %d\n",x,sol);
    printf("The linked list is now as follows:\n");
    printlist(head);
    printf("Enter index of replacing element:");
    int y;
    scanf("%d",&y);
    printf("Enter value to replace :");
    int reps;
    scanf("%d",&reps);
    
    replace_ele(y,head,reps);
    printf("\n");
    printf("The linked list is now as follows:\n");
    printlist(head);
    
    printf("Now converting to array: \n");
    int arr[3];
    conv_to_array(arr,head);
    int iteratore;
    printf("Printing the array using for loop:\n");
    for(iteratore=0;iteratore<3;iteratore++){
        printf("index : %d  Value %d\n",iteratore,arr[iteratore]);
    }
    
    
    return 0;
}

void printlist(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p= p->next;
    }
}

void printlistrev(struct node *q){
    while(q!=NULL){
        printf("%d ",q->data);
        q=q->prev;
    }
}

int search_ele(int x,struct node *r){
    int count = 0;
    while(r!=NULL){
        if(r->data != x){
            r=r->next;
            count++;
        }
        else{
            return count;
        }
    }
}

void replace_ele(int y,struct node *s,int rep){
    int count = 0;
    while(s!=NULL){
        if(count == y){
            s->data = rep;
        }
        s = s->next;
        count++;
        
    }
}

void conv_to_array(int arr[3],struct node *d){
    int indd = 0;
    while(d != NULL){
        arr[indd] = d->data;
        d=d->next;
        indd++;
    }
}
