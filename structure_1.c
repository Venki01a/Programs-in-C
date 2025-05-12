#include<stdio.h>
struct sll
{
    int roll_no;
    char name[50];
    int maths,hindi,english,science,social_science,total,division;
}a,b,c,d;
int main()
{
    a.total=0;
    printf("Enter roll_no,name: ");
    scanf("%d%s",&a.roll_no,&a.name);
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&a.maths,&a.hindi,&a.english,&a.science,&a.social_science);
    a.total= a.maths+ a.hindi+ a.english+ a.science+ a.social_science;
    printf("\nMarks of student1 is %d",a.total);
    b.total=0;
    printf("\nEnter roll_no,name: ");
    scanf("%d%s",&b.roll_no,&b.name);
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&b.maths,&b.hindi,&b.english,&b.science,&b.social_science);
    b.total= b.maths+ b.hindi+ b.english+ b.science+ b.social_science;
    printf("\nMarks of student2 is %d",b.total);
    c.total=0;
    printf("\nEnter roll_no,name: ");
    scanf("%d%s",&c.roll_no,&c.name);
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&c.maths,&c.hindi,&c.english,&c.science,&c.social_science);
    c.total= c.maths+ c.hindi+ c.english+ c.science+ c.social_science;
    printf("\nMarks of student3 is %d",c.total);
    d.total=0;
    printf("\nEnter roll_no,name: ");
    scanf("%d%s",&d.roll_no,&d.name);
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&d.maths,&d.hindi,&d.english,&d.science,&d.social_science);
    d.total= d.maths+ d.hindi+ d.english+ d.science+ d.social_science;
    printf("\nMarks of student4 is %d",d.total);
    a.division=a.total/5;
    printf("\nResult is: ");
    if(a.division>60)
     {
        printf("\nFirst division");
     }
    else if(a.division>40 && a.division<60)
     {
        printf("\nSecond division");
     }
    else if(a.division>33 && a.division<40)
     {
        printf("\nThird division");
     }
    else
     {
        printf("\nfail");
     }
    b.division=b.total/5;
    printf("\nResult is: ");
    if(b.division>60)
     {
        printf("\nFirst division");
     }
    else if(b.division>40 && b.division<60)
     {
        printf("\nSecond division");
     }
    else if(b.division>33 && b.division<40)
     {
        printf("\nThird division");
     }
    else
     {
        printf("\nfail");
     }
    c.division=c.total/5;
    printf("\nResult is: ");
    if(c.division>60)
     {
        printf("\nFirst division");
     }
    else if(c.division>40 && c.division<60)
     {
        printf("\nSecond division");
     }
    else if(c.division>33 && c.division<40)
     {
        printf("\nThird division");
     }
    else
     {
        printf("\nfail");
     }
    d.division=d.total/5;
    printf("\nResult is: ");
    if(d.division>60)
     {
        printf("\nFirst division");
     }
    else if(d.division>40 && d.division<60)
     {
        printf("\nSecond division");
     }
    else if(d.division>33 && d.division<40)
     {
        printf("\nThird division");
     }
    else
     {
        printf("\nfail");
     }
}