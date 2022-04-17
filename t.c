#include<stdio.h>
int main()
{
    int a[10];
    int i,j;
    int *ptr;
    ptr=a;
    for(i=0;i<5;i++){
        scanf("%d",ptr);
        ptr++;
    }
    for(i=0;i<5;i++){
        printf("%d\n",*(ptr));
        ptr++;
    }
}