/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
    int temp_c,dist_km,dist_cm,temp_feet,vol_litr,mass_kg;
    float temp_f,dist_mil,dist_feet,dist_inches,temp_inches,vol_gallon,mass_pounds;
    printf("********************* SI to American Units convertor*******************");
    printf("\nPlease enter temperature in celcius: ");
    scanf("%d",&temp_c);
    temp_f = temp_c*(1.8) + 32; 
    printf("Temperature in fahrenheit: %f",temp_f);
    printf("\nPlease enter distance in kilometers: ");
    scanf("%d",&dist_km);
    dist_mil = 0.6213*dist_km;
    printf("Distance in miles: %f",dist_mil);
    printf("\nPlease enter distance in cm");
    scanf("%d",&dist_cm);
    dist_inches = 0.0328*12*dist_cm;
    temp_feet = dist_inches/12;
    printf("Distance in feet: %d ' %f '' ",temp_feet,dist_inches-(temp_feet*12));
    printf("\nPlease enter volume in litres");
    scanf("%d",&vol_litr);
    vol_gallon = 0.2199*vol_litr;
    printf("Volume in gallons: %f",vol_gallon);
    printf("\nPlease enter Weight in kg");
    scanf("%d",&mass_kg);
    mass_pounds = 2.2046*mass_kg;
    printf("Mass in pounds: %f",mass_pounds);
    
}
