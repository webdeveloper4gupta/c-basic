#include<stdio.h>
//copy of one string to other by using library function and without library function
int main()
/*
{
    char s[100],g[100];
    printf("enter the name of best ccoder in this world\n");
    gets(s);
    strcpy(g,s);
    printf("the characters in second strings is %s\n",g);
    return 0;
}*/
{
    int i=0;
    char s[100],g[100];
    gets(s);
    while(s[i]!='\0'){
    g[i]=s[i];
    i++;
    }
    puts(g);
    return 0;

}