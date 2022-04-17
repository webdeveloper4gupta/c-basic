#include<stdio.h>
 struct student{
    int rollnumber;
    float marks;
    char name[100];
};
int main()
{
    struct student s[100];
    int i;
    for(i=0;i<2;i++){
        printf("enter the roll number of %d student\n",i+1);
        scanf("%d",&s[i].rollnumber);
        printf("enter the marks of %d student\n",i+1);
        scanf("%f",&s[i].marks);
        printf("enter the name of %d student\n",i+1);
        scanf("%s",&s[i].name);
    }
     for(i=0;i<2;i++){
        printf(" the roll number of %d student is %d\n",i+1,s[i].rollnumber);
        printf(" the marks of %d student is %f\n",i+1,s[i].marks);
        printf(" the name of %d student is %s \n",i+1,s[i].name);
    }
    return 0;
}