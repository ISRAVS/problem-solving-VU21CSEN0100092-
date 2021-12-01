#include<stdio.h>
int main()
{
    int p,t,r;
    printf("enter the value of principal amount " , p);
    scanf("%d" ,&p);
    printf("enter the value of time" , t);
    scanf("%d" ,&t);
    printf("enter the value of rate of interest" , r);
    scanf("%d" ,&r);
    float i;
    i=(p*t*r)/100;
    printf("the value of simple interest is %f" , i);
    return 0;
}
