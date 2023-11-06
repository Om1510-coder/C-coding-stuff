
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void printLinkedlist(struct node *p);

int main()
{
    struct node *head;
    struct node *nd_one = NULL;
    struct node *nd_two = NULL;
    
    nd_one = malloc(sizeof(struct node));
    nd_two = malloc(sizeof(struct node));
    
    nd_one->data = 1;
    nd_two->data = 2;
    
    nd_one -> next = nd_two;
    nd_two -> next = NULL;
    
    head = nd_one;
    
    
    //now adding an element between nodes one and two
    struct node *node_betwn = NULL;
    node_betwn = malloc(sizeof(struct node));
    
    nd_one -> next = node_betwn;
    node_betwn -> next = nd_two;
    
    node_betwn -> data = 3;
    printf("Hello World");
    printf("%ld\n",sizeof(nd_one));
    printf("%d\n",nd_one->data);
    printf("%d\n",nd_two->data);
    
    printLinkedlist(head);
    
    //now adding an element at the end of the linked list ;
    struct node *node_end = NULL;
    node_end = malloc(sizeof(struct node));
    node_end->data = 4;
    nd_two->next = node_end;
    node_end->next = NULL;
    printf("\n");
    printLinkedlist(head);
    
    
    //now deleting an element from the linked list
    //say I  am deleting node number one
    //now head->next points to node two directly
    //also node one -> next must go to a null value
    
    head->next = nd_two;
    
    printf("\n");
    printLinkedlist(head);
    
    
    return 0;
}

void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }
}
