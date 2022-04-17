#include<stdio.h>
int main()
{
    int a,*ptr;
    ptr=&a;
    a=7;
    printf("the value of a is %d\n",*ptr);// the value of address a is *ptr
    printf("the value of ptr is %d\n",ptr);
    printf("the address of a is %u\n",ptr);
    printf("the address of ptr is %u\n",&ptr);
    return 0;
}