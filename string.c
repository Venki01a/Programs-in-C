#include<stdio.h>
#include<string.h>
main()
{
    char a[50];
    int i,n;
    printf("Enter a string: ");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
     {
       printf("%c\n",a[i]);
     }
    
    


}