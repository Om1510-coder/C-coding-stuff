struct node{
    int data;
    struct node *right;
    struct node *left;
}

struct node* createnode(Value){
    struct node*newNode = malloc(sizeof(struct node));
    newNode->data = Value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node* leftside(struct node *root,int value){
    root->left = createnode(value);
    return root->left;
}

struct node* rightside(struct node *root,int value){
    root->right = createnode(value);
    return root->right;
}
