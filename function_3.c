#include<stdio.h>
int sumofdigit(int n);
int main()
{
    int e;
    printf("enter the number who have more than one digit\n");
    scanf("%d",&e);
    sumofdigit(e);
    return 0;
}
int sumofdigit(int n){
    int d,sum=0;
    while(n!=0){
    d=n%10;
    sum=sum+d;
    n=n/10;
    }
    printf("thhe sum of digit is %d\n",sum);
    
}