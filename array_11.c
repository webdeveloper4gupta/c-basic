#include<stdio.h>
// array and pointer
int main()
{
    int i,a[10];
    int *ptr;
    ptr=&a[0];
    for(i=0;i<5;i++){
        printf("enter the %d elements\n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(i=0;i<5;i++){
       printf("%d\n",a[i]);
    }
    return 0;
}
