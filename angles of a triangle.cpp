#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first angle of a triangle " , a);
    scanf("%d" ,&a);
    printf("enter the seconf angle of a triangle " ,b);
    scanf("%d" ,&b);
    c=180-(a+b);
    printf("the third angle of a triangle is %d" ,c);
    return 0;

}
