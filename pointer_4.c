#include<stdio.h>
void swap(int *a,int *b ){
    int temp;
    temp=*a;
  *a =*b;
    *b=temp;

}
int main()
    {
       int c,d,e;
       c=7,d=9;
    swap(&c,&d);
       printf("after swaping a is %d and b is %d\n",c,d);

    }
