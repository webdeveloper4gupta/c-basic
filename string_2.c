//length of string by library function and without library function
#include<stdio.h>
#include<string.h>
/*
int main()
{
    char s[100];
    int length;
    printf("enter the name of best coder in 2024\n");
    gets(s);
    length=strlen(s);
    printf("the length of string is %d\n",length);
    return 0;
}*/
int main()
{
    char s[100];
    int length=0;
    printf("enter the name of the best coder of world\n");
    gets(s);
    while(s[length]!='\0'){
      length++;
    }
    printf("the length of string is %d\n",length);
    return 0;
}