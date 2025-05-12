#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int i,n,b=0;
    printf("Enter a string: ");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
     {
       if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            b++;
        } 
     }
    printf("Frequency of a=%d",b);
    
    
    
    


}