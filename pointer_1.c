#include<stdio.h>
int sum(int *a,int *b){
    int c;
    c=*a+*b;
    return c;
}
int main()
{
    int c,d,result;
    int *a,*b;
    a=&c;
    b=&d;
    c=4,d=5;
    result =sum(&c,&d);
    printf("thee sum of two number isv %d\n",result);
    c=4;
    d=9;
      result =sum(&c,&d);
     printf("thee sum of two number isv %d\n",result);
    return 0;
}