#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter the value of a" , a);
    scanf("%d" ,&a);
    printf("enter the value of b" , b);
    scanf("%d" ,&b);
    printf("enter the value of c" , c);
    scanf("%d" ,&c);
    a=b;
    b=c;
    c=a;
    printf("the value of c is %d" , a);
    printf("the value of b is %d" , c);
    printf("the value of a is %d" , b);
    return 0;
}
