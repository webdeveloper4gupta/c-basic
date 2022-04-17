#include<stdio.h>
//kiit marking scheme
int main()
{
  float marks,gp;
  printf("enter the marks student got in particularsubject \n");
  scanf("%f",&marks);
  gp=marks/10;
  if(gp==9||gp>9){
      printf("your grade is O\n");
  }
  else if(gp==8||gp>8){
      printf("your grade is E\n");
  }
  else if(gp==7||gp>7){
      printf("your grade is A\n");
  }
  else{
      printf("you have to need improvement\n");
  }
  return 0;
}