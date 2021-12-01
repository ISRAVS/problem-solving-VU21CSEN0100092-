#include<stdio.h>
int main()
{
    int a;
    printf("enter any value less than ten" , a);
    scanf("%d" , &a);
    for(a;a<=10;a++)
    {
        printf("%d\n" , a);
    }
    return 0;
}
