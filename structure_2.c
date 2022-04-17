//add two complex number
#include<stdio.h>
struct complex{
    int real,img;
};
int main()
    {
      struct complex c[100],*ptr;
      ptr=&c[0];
      int i;
      struct complex sum;
      sum.real=0;
      sum.img=0;
      for(i=0;i<3;i++){
          printf("enter the %d complex number real and imaginary\n",i+1);
          scanf("%d%d",&(*ptr).real,&(*ptr).img);
          ptr++;
      }
      for(i=0;i<3;i++){
          sum.real=sum.real+c[i].real;
          sum.img=sum.img+c[i].img;
      }
      printf("the sum of real number is %d\n",sum.real);
      printf("the sum of complex number is %d\n",sum.img);
      return 0;
    }
