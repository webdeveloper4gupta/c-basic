#include<stdio.h>
int sum(int a,int b);//function protype
int main()
{
    int p,q;
    printf("enter the two numbers\n");
    scanf("%d%d",&p,&q);
    sum(p,q);
    return 0;

}
int sum(int a,int b){
    int c;
    c=a+b;
    printf("the addition of two numbers is %d\n",c);
}