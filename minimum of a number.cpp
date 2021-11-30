#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the variables", a,b,c);
    scanf("\n%d\n%d\n%d" ,&a,&b,&c );
    if (a<b&&a<c)
    {
        printf("a is minimum ");
    }
    if (b<a&&b<c)
    {
        printf("b is minimum");
    }
    if  (c<a&&c<b)
    {
        printf("c is minimum ");
    }
    return 0;
    
}
