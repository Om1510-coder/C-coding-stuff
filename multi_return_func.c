//base code from Y. Kanetkars' book on pointers
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void square_cube_calc(int, float*,float*,float*);

int main(){
    int num;
    float square,cube,sqroot;
    printf("Enter number\n");
    scanf("%d",&num);
    square_cube_calc(num,&square,&cube,&sqroot);
    printf("Square = %f\n",square);
    printf("Cube = %f\n",cube);
    printf("Sq root = %f\n",sqroot);
    return 0;
    
}

void square_cube_calc(int r, float *a,float *b,float *c){
    *a = r*r;
    *b = *a*r;
    *c = pow(r,0.5);
}
