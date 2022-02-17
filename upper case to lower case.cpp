#include<stdio.h>
int main()
{
    char upr;
    int ascii;
    printf("enter the upper case characters " , upr);
    scanf("%c" , &upr);
    ascii=upr+32;
    printf(" character in lower case is %c" , upr,ascii);
    return 0;
    
}
