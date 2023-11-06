//c code to take in two complex numbers and perform addition, subtraction, conjugate etc.
//written with base concept of using structure for the two parts of a complex number
//base code from programiz, some obviously stupid lines added by me
#include <stdio.h>
#include <math.h>
struct complex_struct{
    
    int real_part;
    int complex_part;
}cs_a,cs_b,cs_sol;

int main()
{
    //printf("Hello World");
    printf("Complex number calculator\n");
    printf("The first complex number: \n");
    printf("Enter real part of first complex number: \n");
    scanf("%d",&cs_a.real_part);
    printf("Enter complex part of first complex number: \n");
    scanf("%d",&cs_a.complex_part);
    printf("The second complex number: \n");
    printf("Enter real part of second complex number: \n");
    scanf("%d",&cs_b.real_part);
    printf("Enter complex part of second complex number: \n");
    scanf("%d",&cs_b.complex_part);
    printf("The addition of the complex numbers is: %d + %di",cs_a.real_part+cs_b.real_part,cs_a.complex_part+cs_b.complex_part);
    printf("The subtraction of the complex numbers is: %d + %di",cs_a.real_part-cs_b.real_part,cs_a.complex_part-cs_b.complex_part);
    printf("The conjugate of the first complex number is : %d %di\n",cs_a.real_part,(-1)*cs_a.complex_part);
    printf("The conjugate of the second complex number is : %d %di\n",cs_b.real_part,(-1)*cs_b.complex_part);
    printf("The magnitude of the first complex number is: %f\n",pow(((cs_a.real_part)*(cs_a.real_part))+((cs_a.complex_part)*(cs_a.complex_part)),0.5));
    printf("The magnitude of the second complex number is: %f\n",pow(((cs_b.real_part)*(cs_b.real_part))+((cs_b.complex_part)*(cs_b.complex_part)),0.5));
    return 0;
}

