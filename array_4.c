//count how many positive and negative element in array
#include<stdio.h>
int main()
{
    int a[10];
    int i,zero=0;
    int positive =0;
    int negative=0;
for(i=0;i<5;i++){
    printf("enter the %d element of array is :\n",i+1);
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
    if(a[i]==0){
       zero++;
    }
    else if(a[i]>0){
        positive++;
    }
    else {
        negative++;
    }
}
printf("the zero number is %d\n",zero);
printf("the positive number is %d\n",positive);
printf("the number of negative element is %d\n",negative);
return 0;
}