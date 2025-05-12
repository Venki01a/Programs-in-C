#include<stdio.h>
struct employee
 {
  int employeeno;
  char *name;
  int ta,basic,hra;
  int salary;
 }a,b;


int main()
{
    a.employeeno=112;
    a.name="Amit";
    a.ta=456;
    a.basic=500;
    a.hra=890;
    a.salary=a.ta+a.basic+a.hra;
    b.employeeno=113;
    b.name="Raj";
    b.ta=700;
    b.basic=600;
    b.hra=400;
    b.salary=b.ta+b.basic+b.hra;
    printf("Salary of employee a is %d\n",a.salary);
    printf("Salary of employee b is %d\n",b.salary);

    
}