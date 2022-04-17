#include<stdio.h>
struct height{
    int inch;
    int feet;
};
int main()
{
  struct height h[10],sum;
  int i;
  sum.inch=0;
  sum.feet=0;
  for(i=0;i<3;i++){
      printf("enter the height of %d person in feet and inch\n",i+1);
      scanf("%d%d",&h[i].inch,&h[i].feet);
  }
  
  for(i=0;i<3;i++)
  {
      sum.inch=sum.inch+h[i].inch;
      sum.feet=sum.feet+h[i].feet;
  }
   printf("the total height in inch is %d\n",sum.inch);
   printf("the total height in feet is %d\n",sum.feet);
   return 0;
}