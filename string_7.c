#include<stdio.h>
int main()
{
   char s[100];
   int vowel=0,constraints=0;
   printf("enter your name\n");
   gets(s);
   for(int i=0;s[i]!='\0';i++){
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
       {
           vowel++;
       }
       else{
           constraints ++;
       }
   }
   printf("the vowels is %d\n",vowel);
   printf("the constraints is %d\n",constraints);
   return 0;
}