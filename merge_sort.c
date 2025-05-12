#include<stdio.h>
void mergesort(int a[],int i,int j)
{
    int mid;
    if(i<j)
     {
        mid=(i+j)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        merge(a,i,mid,j);
     }
}
void merge(int a[],int low,int mid,int high)
{
   int merged[high-low+1];
   int i=low,j=mid+1,k=0;
   while(i<=mid && j<=high)
    {
      if(a[i]<=a[j])
       {
         merged[k]=a[i];
         i++;k++;
       }
      else
       {
         merged[k]=a[j];
         j++;k++;
       }
    }
   while(i<=mid)
    {
      merged[k]=a[i];
      k++;i++;
    }
   while(j<=high)
    {
      merged[k]=a[j];
      k++;j++;
    }
   int n=sizeof(merged[k])/sizeof(merged[0]);
   for(i=0,j=low;i<n;i++,j++)
    {
      a[j]=merged[i];
    }
}
void print(int a[],int size)
{
   int s=size;
   printf("Sorted array is: ");
   for(int i=0;i<s;i++)
    {
      printf("\t%d",a[i]);
    }
}





int main()
{
    int a[100],n,i;
    printf("Enter no. of elements of store: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
     {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
     }
    mergesort(a,0,n-1);
    print(a,n);
}