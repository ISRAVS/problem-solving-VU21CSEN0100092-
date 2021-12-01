#include<stdio.h>
int main()
{
    int l,b,h;
    printf("enter the value of length " , l);
    scanf("%d" , &l);
    printf("enter the value of breadth " , b);
    scanf("%d" , &b);
    printf("enter the value of height " , h);
    scanf("%d" , &h);
    int volume ;
    volume = (l*b*h);
    printf("the volume of the cubiod is %d" , volume );
    return 0;
}
