#include<stdio.h>
struct stu
 {
  int rollno;
  char *name;
  float percent;
 }a,b,c;

 int main()
 {
    
    a.rollno=111;
    a.name="amit";
    a.percent=60.3;
    printf("Enter rollno,name,percent: ");
    scanf("%d",&b.rollno);
    scanf("%s",&b.name);
    scanf("%f",&b.percent);
    printf("%d,%s,%f",a.rollno,a.name,a.percent);
    printf("%d,%s,%f",b.rollno,b.name,b.percent);

 }


