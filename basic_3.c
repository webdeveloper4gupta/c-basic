//swap two integer without third variable;
/*
#include<stdio.h>
int main()
{
    int a=7,b=9;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping the value of a and b iss %d %d",a,b);
    return 0;
}*/
//swaping with third variables
#include<stdio.h>
int main()
{
    int a=7,b=9,temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swaping the value of a and b iss %d %d",a,b);
    return 0;
}