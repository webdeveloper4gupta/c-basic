#include<stdio.h>
//check prime number or not
int main()
{
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for( i=2;i<n;i++){
        if(n%i==0){
            printf("non prime number\n");
            break;
        }
    }
    if(n==i){
        printf("prime number\n");
    }
    return 0;
}