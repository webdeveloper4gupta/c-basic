#include<stdio.h>
int main()
{
    int r1,r2;
    printf("enter the range \n");
    scanf("%d%d",&r1,&r2);
    for(int i=r1;i<r2-1;i++){// show how to print the range
        printf("%d\n",i+1);
    }
    return 0;
}