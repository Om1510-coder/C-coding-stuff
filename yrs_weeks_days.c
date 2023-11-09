#include <stdio.h>

int main()
{
    int d,difference,difftwo,y,w,day;
    printf("Enter number of days");
    scanf("%d",&d);
    y = d/365;
    printf("Number of years :%d\n",y);
    difference = d - 365*y;
    w = difference/7;
    int m;
    printf("Number of weeks :%d\n",w);
    difftwo = difference - w*7;
    printf("Number of days :%d\n",difftwo);
}
