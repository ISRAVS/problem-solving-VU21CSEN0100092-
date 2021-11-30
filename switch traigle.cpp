#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("entre the angles of a traingle " , a1,a2,a3);
    scanf("\n%d\n%d\n%d" ,&a1,&a2,&a3);
    if(a1==a2==a3)
    {
        printf("the traingle is equilateral");
    }
    if (a1!=a2!=a3)
    {
        printf("the traingle is scalen");
    }
    else
    {
        printf("the traingle is isocles ");
    }
    return 0;
}
