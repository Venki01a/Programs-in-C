#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int i,n,b=0,c=0,d=0,e=0,f=0;
    printf("Enter a string: ");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
     {
       if(a[i]=='a')
        {
            b++;
        }
       else if(a[i]=='e')
        {
            c++;
        }
       else if(a[i]=='i')
        {
            d++;
        }
       else if(a[i]=='o')
        {
            e++;
        }
       else if(a[i]=='u')
        {
            f++;
        }
     }
    printf("Frequency of a =%d\n",b);
    printf("Frequency of e =%d\n",c);
    printf("Frequency of i =%d\n",d);
    printf("Frequency of o =%d\n",e);
    printf("Frequency of u =%d\n",f);
    
    
    


}