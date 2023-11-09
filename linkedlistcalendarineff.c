#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    char name[40];
    struct node *next;
    struct node *prev;
};

void printlist(struct node *h);
void printlistrev(struct node *t);

int main()
{
    struct node *head;
    head = malloc(sizeof(struct node));
    struct node *jan = NULL;
    jan = malloc(sizeof(struct node));
    struct node *feb = NULL;
    feb = malloc(sizeof(struct node));
    struct node *mar = NULL;
    mar = malloc(sizeof(struct node));
    struct node *apr = NULL;
    apr = malloc(sizeof(struct node));
    struct node *my = NULL;
    my = malloc(sizeof(struct node));
    struct node *jun = NULL;
    jun = malloc(sizeof(struct node));
    struct node *jul = NULL;
    jul = malloc(sizeof(struct node));
    struct node *aug = NULL;
    aug = malloc(sizeof(struct node));
    struct node *sep = NULL;
    sep = malloc(sizeof(struct node));
    struct node *oct = NULL;
    oct = malloc(sizeof(struct node));
    struct node *nov = NULL;
    nov = malloc(sizeof(struct node));
    struct node *dec = NULL;
    dec = malloc(sizeof(struct node));
    head ->next = jan;
    head ->prev = NULL;
    jan->data = 31;
    jan->next = feb;
    jan->prev = head;
    strcpy(jan->name,"January");
    
    feb->data = 28;
    feb->next = mar;
    feb->prev = jan;
    strcpy(feb->name,"February");
    
    mar->data = 31;
    mar->next = apr;
    mar->prev = feb;
    strcpy(mar->name,"March");    

    apr->data = 30;
    apr->next = my;
    apr->prev = mar;
    strcpy(apr->name,"April");
    
    my->data = 31;
    my->next = jun;
    my->prev = apr;
    strcpy(my->name,"May");
    
    jun->data = 30;
    jun->next = jul;
    jun->prev = my; 
    strcpy(jun->name,"June");
    
    jul->data = 31;
    jul->next = aug;
    jul->prev = jun;
    strcpy(jul->name,"July");
    
    aug->data = 31;
    aug->next = sep;
    aug->prev = jul;
    strcpy(aug->name,"August");
    
    sep->data = 30;
    sep->next = oct;
    sep->prev = aug;
    strcpy(sep->name,"September");
    
    oct->data = 31;
    oct->next = nov;
    oct->prev = sep;
    strcpy(oct->name,"October");
    
    nov->data = 30;
    nov->next = dec;
    nov->prev = oct;
    strcpy(nov->name,"November");
    
    dec->data = 31;
    dec->next = NULL;
    dec->prev = nov;
    strcpy(dec->name,"December");
    
    printf("Hello World\n");

    printlist(head);
    printf("\n");
    printf("Now in reverse order\n");
    printlistrev(dec);
    
    return 0;
}

void printlist(struct node *h){
    while(h!=NULL){
        printf("%s",h->name);
        printf(" days :%d\n  ",h->data);
        
        h=h->next;
    }
}

void printlistrev(struct node *t){
    while(t!=NULL){
        printf("%s",t->name);
        printf(" days :%d\n  ",t->data);
        
        t=t->prev;
    }
}
