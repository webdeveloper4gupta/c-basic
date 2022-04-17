#include<stdio.h>
//swap of two array
int main()
{
    int a[10],b[10];
    int temp[10];
    int i;
    for(i=0;i<10;i++){
        printf("enter the %d element :\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        printf("enter the %d element :\n",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
       temp[i]=a[i];
       a[i]=b[i];
       b[i]=temp[i];
       
    }
    for(i=0;i<10;i++){
        printf("after swAping a[10] is %dand b[10] is %d\n",a[i],b[i]);
    }
    return 0;

}