#include<stdio.h>
int main()
{
    int a,*i,**j;
    a=4;
    i=&a;
    j=&i;
    printf("the value of a is %d\n",*i);
    printf("the value of i is %d \n",*j);
    printf("the address of a is %u\n",i); 
    printf("the value of j is %d\n",j);
    printf("the address of i is %u\n",&i);
    printf("the value of a is %d\n",**j);
    printf("the address of a is %u\n",*j);   
}