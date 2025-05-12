#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low;
    int j=high;

    while(i<j)
     {
        while(a[i]<=pivot && i<high)
         {
            i++;
         }
        while(a[j]>pivot)
         {
            j--;
         }
        if(i<=j)
         {
            swap(&a[i],&a[j]);
         }
     }
    swap(&a[low],&a[j]);
    return j;
}
void quicksort(int a[],int low,int high)
{
    if(low<high)
     {
        int p=partition(a,low,high);
        quicksort(a,low,p-1);
        quicksort(a,p+1,high);
     }
}

int main()
{
    int a[100],i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Original array:\n");
    for(i=0;i<n;i++)
     {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
     }
    quicksort(a,0,n-1);
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
     {
        printf("%d\n",a[i]);
     }
}