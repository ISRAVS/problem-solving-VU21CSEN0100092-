#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    printf("enter principle amount " , p);
    scanf("%d" ,&p);
    printf("enter rate of interest" , r);
    scanf("%d" , &r);
    printf("enter time" , t);
    scanf("%d" , &t);
    float ci;
    ci=p*(pow((1+r/100) ,t));
    printf("the compound interest is %f" , ci);
    return 0;
}
