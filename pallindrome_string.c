#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50]="";
    int i,n;
    printf("Enter a string: ");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
     {
        b[i]=a[n-1-i];
     }
    if(strcmp(a,b)==0)
     {
        printf("Strings are equal");
     }
    else
     {
        printf("Strings are not equal");
     }
    
    
    


}