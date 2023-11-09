#include <stdio.h>
#include <string.h>

struct day{
    int yr;
    int mnth;
    int dy;
}day_one,birth_day;


int main()
{
    int this_mnth;
    int choice;
    printf("Enter your birthday: ");
    scanf("%d",&birth_day.dy);
    scanf("%d",&birth_day.mnth);
    scanf("%d",&birth_day.yr);
    //printf("Hello World");
    printf("Enter date as dd mm yyyy: ");
    scanf("%d",&day_one.dy);
    scanf("%d",&day_one.mnth);
    scanf("%d",&day_one.yr);
    printf("**********\n");
    char val[10];
    choice = day_one.mnth;
    switch(choice){
        case 1: strcpy(val,"January");this_mnth = 31;
                break;
        case 2: strcpy(val,"February");this_mnth = 28;
                break;
        case 3: strcpy(val,"March");this_mnth = 31;
                break;
        case 4: strcpy(val,"April");this_mnth = 30;
                break;
        case 5: strcpy(val,"May");this_mnth = 31;
                break;
        case 6: strcpy(val,"June");this_mnth = 30;
                break;
        case 7: strcpy(val,"July");this_mnth = 31;
                break;
        case 8: strcpy(val,"August");this_mnth = 31;
                break;
        case 9: strcpy(val,"September");this_mnth = 30;
                break;
        case 10:strcpy(val,"October");this_mnth = 31;
                break;
        case 11:strcpy(val,"November");this_mnth = 30;
                break;
        case 12:strcpy(val,"December");this_mnth = 31;
               break;
        default : strcpy(val,"NaN :(");
                break;
    }
    //this_mnth = val;
    printf("The date you entered is: %d:%s:%d\n",day_one.dy,val,day_one.yr);
    //printf("The number of days in that month are: %d\n",this_mnth);
    if((birth_day.dy == day_one.dy)&&(birth_day.mnth == day_one.mnth)){
        printf("HAPPY BIRTHDAY !!!!!\n");
        printf("You have become %d years old",day_one.yr - birth_day.yr);
        
    }
    return 0;
}
