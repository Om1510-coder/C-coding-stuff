#include <stdio.h>

int main()
{
    //i++ will first return original, then increment
    int i = 0;
    int a = i++;
    printf("%d %d",a,i);
    //a will give a zero because i returned its original value
    //but, i has inccremented itself, thus making it int16_t
    
    //++j will first increment, then return incremented value
    int j  = 0;
    int b = ++j;
    printf("\n%d %d",b,j);
    //b and j are both 1, because j is incremented to 1, 
    
    //b = a++ + a
    //say a is 1, then a++ will return 1, and a will become 2, solution should be 3
    int p = 1;
    int q  = p++ + p;
    printf("\na is %d b is %d",p,q);
    
    //r = ++q + q 
    //say q is 1, then q++ will return 2, q will be 2, so r will be int64_t
    int s = 1;
    int r = ++s + s;
    printf("\ns is %d r is %d",s,r);
    
    
    //ss = aa++ + ++aa;
    //say aa is 1, then aa++ will return 1, aa will now be 2, ++aa will now be 3, so ss will give 4
    int aa = 1;
    int ss = aa++ + ++aa;
    printf("\naa is %d ss is %d",aa,ss);
    
    //pp = cc++ + ++dd;
    //say cc is 1, dd is 1, then cc++ will return 1, ++dd will give 2, so the solution will be 3 
    int cc = 1;
    int dd = 1;
    int pp = cc++ + ++dd;
    printf("\ncc is %d dd is %d",cc,pp);
    
    //vals now holds the value 10
    //ptr hold the adress of vals
    //*ptr is the value : vals -> hence *p++ will pre increment vals
    //vals will become 11, but *p++ will return 10
    int vals = 10;
    int *ptr = &vals;
    printf("\n%d",*ptr++);
    
    return 0;
}
