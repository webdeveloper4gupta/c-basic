#include<stdio.h>
int main()
{
    char s[100];
    int upper=0,lower=0;
    int i;
    printf("enter your name\n");
    gets(s);
   for( i=0;s[i]!='\0';i++){
        if(s[i]>=97 && s[i]<=122){
            lower++;
        }
        else if(s[i]>=65 && s[i]<=90){
            upper++;
        }
        
    }
    printf("the upper case is %d\n",upper);
    printf("total lower case is %d\n",lower);
    return 0;
}