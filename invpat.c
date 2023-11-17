printf("Inverted half pyramids\n\n");
    for(int j = x;j>0;j--){
    for(int i = 0;i<j;i++){
        printf("*");
    }
    printf("\n");
    }
    
    for(int j = x;j>0;j--){
    for(int i = 0;i<j;i++){
        printf("%c",(65 + i));
    }
    printf("\n");
    }
