#include<stdio.h>
int main()
{
    char s[100];
char*f;
    f=&s[0];

    printf("enter your name\n");
    gets(s);
    puts(f);
  return 0;
}
