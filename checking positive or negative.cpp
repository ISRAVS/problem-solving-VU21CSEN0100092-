#include<stdio.h>
int main()
{
    int a;
    printf("enter the number " , a);
    scanf("%d" , &a);
    switch(a>0){
        case 1:
        printf("the number is positive");
        break;
        case 0:
        switch(a<0){
            case 1:
            printf("the number is negative ");
            break;
            case 0:
            printf("the number is equal to zero ");
            break;
        }
        return 0;
    }
}
        
    

