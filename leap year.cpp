#include<stdio.h>
int main()
{
    int y;
    printf("enter the year",y);
    scanf("%d",&y);
    if (y%4==0)
    {
        printf("the year is leap year ");
    }
    else
    {
        printf("the year is not leap year ");
    }
    return 0;
}
