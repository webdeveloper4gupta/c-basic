#include<stdio.h>
int sum(int *a,int *b){
    int result1;
    result1=*a+*b;
    return result1;
}
float avg(float *c,float *d){
    float result2;
    result2=(*c+*d)/2;
    return result2;
}
int main()
{
    int t1,t2;
    float t3,t4;
    t1=2;
    t2=3;
    t3=5.0;
    t4=9.0;
   int f= sum(&t1,&t2);
    float f2=avg(&t3,&t4);
    printf("the sum of two number is %d\n",f);
    printf("the avg of two number is %f\n",f2);
    return 0;
}
