#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("The Year is leap year");
    }
    else if(year%100==0)
    {
        printf("The Year is not a leap year");
    }
    else if(year%4==0)
    {
        printf("The Year is leap year");
    }
    else
    {
        printf("The Year is not a leap year");
    }
    return 0;
}
