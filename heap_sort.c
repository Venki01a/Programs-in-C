#include<stdio.h>
void swap(int *a,int *b)
{
    int tempvar=*a;
    *a=*b;
    *b=tempvar;
    
}
void heapify(int arr[],int size,int i)
{
    int greatest=i;
    int leftside=2*i+1;
    int rightside=2*i+2;
    if(leftside<size && arr[leftside]>arr[greatest])
     {
        greatest=leftside;
     }
    if(rightside<size && arr[rightside]>arr[greatest])
     {
        greatest=rightside;
     }
    
    if(greatest!=i)
     {
      swap(&arr[i],&arr[greatest]);
      heapify(arr,size,greatest);
     }
}
void heapsort(int arr[],int size)
{
    for(int i=size/2-1;i>=0;i--)
     {
        heapify(arr,size,i);
     }
    for(int i=size-1;i>=0;i--)
     {
       swap(&arr[0],&arr[i]);
       heapify(arr,i,0);
     }

     
}


void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
     {
        printf("%d\n",arr[i]);
     }
    printf("\n");
}
int main()
{
    int arr[100],size;
    printf("Enter no of elements in array to store: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
     {
      printf("Enter the element: ");
      scanf("%d",&arr[i]);
     }
    heapsort(arr,size);
    printf("\nSorted array is \n");
    printarray(arr,size);
}