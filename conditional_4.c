//check wheather vowel or not:
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='i'||ch=='o'||ch=='e'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("the character is vowel\n");
    }
    else{
        printf("its a consonants \n");
    }
    return 0;
}