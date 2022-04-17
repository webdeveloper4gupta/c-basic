#include<stdio.h>
struct employee{
    int id;
    float salary;
    char name[100];

};
int main()
    {
      struct employee e[10];
     int*ptr;
      ptr=&e[0];
      int n;
      int i;
      for(i=0;i<2;i++){
          printf("enter the details of %d employee\n",i+1);
          scanf("%d",&e[i].id);
          printf("enter the salary of %d employee\n",i+1);
          scanf("%f",&e[i].salary);
          printf("enter the name of %d employee \n",i+1);
          scanf("%s",e[i].name);
      }
      printf("enter your choice to saw that employee data\n");
      scanf("%d",&n);
      for(i=0;i<2;i++){
          if(i== n){
              printf("the employee id is %d\n",e[i].id);
              printf("the salary of that employee is %f\n",e[i].salary);
              printf("the name of employee is %s\n",e[i].name);
              break;
          }
        
      }
      return 0;
    }
