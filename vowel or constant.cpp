#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character ",ch);
    scanf("\n%c" ,&ch);
    switch (ch)
    {
     case 'a':
     printf("vowel letter ");
     break;
     case 'e':
     printf("vowel letter ");
     break ;
     case 'i':
     printf("vowel letter ");
     break ;
     case 'o':
     printf("vowel letter ");
     break ;
     case 'u':
     printf("vowel letter ");
     break ;
     default :
     printf("constant letter ");
    }
    return 0;
}
