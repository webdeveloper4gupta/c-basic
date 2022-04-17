#include<stdio.h>
int add(int a[10],int n){
 
    int sum=0;
    int j;
    for(j=0;j<2;j++){
        sum=sum+a[j];
    }
    printf("the sum of two number is %d\n",sum);
}
int main()
{
    int s[10];
    int j;
    for(j=0;j<2;j++){
        printf("enter the %d number of array\n",j+1);
        scanf("%d",&s[j]);
    }
    add(s,2);
    return 0;
}