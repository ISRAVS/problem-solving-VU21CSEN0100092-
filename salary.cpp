#include<stdio.h>
int main()
{
    int b,d,h,p,l;
    printf("enter the value of basic " , b);
    scanf("%d" ,&b);
    printf("enter the value of da" , d);
    scanf("%d" ,&d);
    printf("enter the value of hra", h);
    scanf("%d" ,&h);
    printf("enter the value of pf" , p);
    scanf("%d" ,&p);
    printf("enter the value of lic ", l);
    scanf("%d" ,&l);
    float s;
    s=(b+d+h-p-l);
    printf("the monthly income of a person is %f" , s);
    return 0;
    
}
