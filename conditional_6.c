#include<stdio.h>
//conversion of character to upper to lower and lower to upper:
int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122){
        printf("lower case\n");
        ch=ch-32;
        printf("now the upper case of same character is %c\n",ch);
    }
    else if(ch>=65&&ch<=90){
          printf("upper case\n");
          ch=ch+32;
          printf("now the lower case of same character is %c\n",ch);
    }
    else{
        printf("enter the valid character\n");
    }
    return 0;
}