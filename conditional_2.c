//leap year or not
#include<stdio.h>
int main()
{
    int year ;
    printf("enter the year \n");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0){
        printf("leap year\n");
    }
    else{
        printf("year is not leap year\n");
    }
    return 0;
}