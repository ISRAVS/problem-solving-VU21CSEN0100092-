#include<stdio.h>
int main()
{
    int t,h,e,m,s;
    printf("enter the marks of telugu" , t);
    scanf("%d" ,&t);
    printf("enter the marks of hindi" ,h);
    scanf("%d" ,&h);
    printf("enter the marks of english" ,e);
    scanf("%d" ,&e);
    printf("enter the marks of maths " ,m);
    scanf("%d" ,&m);
    printf("enter the marks of social" , s);
    scanf("%d" ,&s);
    int sum;
    sum=(t+h+e+m+s);
    printf("the sum of five subjects is %d" , sum);
    int average;
    average=sum/5;
    printf("the average of five subjects is %d" , average);
    float percentage ;
    percentage = average;
    printf("the percentage of five subjects is %.2f", percentage);
    return 0;
}
