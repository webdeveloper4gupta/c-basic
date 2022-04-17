//calculate sum of even index;
#include<stdio.h>
int main()
{
    int a[10];
    int i,sum=0;
    for(i=0;i<5;i++){
        printf("enter the %d element\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i+=2){
        
      sum=sum+a[i];
        
    }
    printf("sum of even elements is %d\n",sum);
    return 0;
}
