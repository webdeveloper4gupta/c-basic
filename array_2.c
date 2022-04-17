#include<stdio.h>
//reverse of 1 d array
int main()
{
    int a[10];
    int i;
    int rem,rev=1;
    for(i=0;i<10;i++){
        printf("enter the %d element :\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        rem=a[i]%10;
        rev=rev*10+rem;
        a[i]-a[i]/10;
    }
        printf("%d\n",rev);

    return 0;
}