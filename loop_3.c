#include<stdio.h>
int main()
{
    int n,ul;
    printf("enter the digit whose table you need\n");
    scanf("%d",&n);
    printf("enter the upper limit for which you need table\n");
    scanf("%d",&ul);
    for(int i=1;i<=ul;i++){
        printf("3*%d=%d\n",i,n*i);
    }
    return 0;
}