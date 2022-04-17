//COMPARISON OF TWO STRINGS
#include<stdio.h>
int main()
{
    char s[100],g[100];
    gets(s);
    gets(g);
    if(strcmp(s,g)==0){
        printf("strings are equal\n");
    }
    else{
        printf("strings are not equal\n");
    }
    return 0;
}