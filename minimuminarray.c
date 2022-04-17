#include<stdio.h>
int main()
{
    int a[10];
    int i;
    int min=a[0];
    int max=0;
    for(i=0;i<4;i++){
        printf("enter the %d element \n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
          min=a[i];
        }
     //  printf("%d\n",min);
    }
     printf("%d\n",min);
     printf("%d\n",max);
    return 0;
}