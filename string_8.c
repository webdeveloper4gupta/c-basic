#include<stdio.h>
//use of sprintf and sscanf
/*
int main()
{
   char s[100];
   sprintf(s,"output=%s","hello");
   puts(s);
   return 0;
}
*/
int main()
{
    char s[100]="aman",g[100];
    sscanf(s,"%s",g);
    puts(g);
    return 0;
}