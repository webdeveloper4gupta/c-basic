//
#include<stdio.h>
int main()
{
   // use of char ,int ,float always in this sequence
    char ch;
    int a,b;
    float d;
     printf("enter the character \n");
    scanf("%c",&ch);
    printf("enter the number\n");
    scanf("%d%d",&a,&b);
    printf("enter the float \n");
    scanf("%f",&d);
    printf("%c%d%d%f\n",ch,a,b,d);
    return 0;
}