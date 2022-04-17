#include<stdio.h>
// FACTORIAL OF GIVEN NUMBER
int main()
{
    int n,fact=1;
    printf("enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("tyhe factorial of given number is %d\n",fact);
    return 0;
}