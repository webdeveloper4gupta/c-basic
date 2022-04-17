#include<stdio.h>
//sum of two array;
int main()
{
    int a[10],b[10];
    int i,sum1=0,sum2=0;
    int sum;
    for(i=0;i<5;i++){
        printf("enter the %d element \n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("enter the second array %d element\n",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        sum1=sum1+a[i];
        sum2=sum2+b[i];

    }
    sum=sum1+sum2;
    printf("%d\n",sum);
    return 0;
}