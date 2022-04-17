#include<stdio.h>
//sum of first and last element of array
int main()
{
    int a[10],sum,c,d;
    int i;
    int n=5;
    for(i=0;i<n;i++){
        printf("enter the %d element \n",i+1);
        scanf("%d",&a[i]);

    }
    
        c=a[0];
        d=a[n-1];
    sum=c+d;
    printf("the sum of first and last element of array is %d\n",sum);
    return 0;
}