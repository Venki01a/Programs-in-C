#include<stdio.h>
int recursive_binary_search(int a[100],int start_index,int last_index,int searched_element)
{
    if(start_index<=last_index)
     {
        int mid=start_index + (last_index - start_index)/2;
        if(a[mid]==searched_element)
         {
            return mid;
         }
        else if(a[mid]>searched_element)
         {
            return recursive_binary_search(a,start_index,mid-1,searched_element);
         }
        else
         {
           return recursive_binary_search(a,mid+1,last_index,searched_element); 
         }
     }
    return 0;
}


int main()
{
    int a[100],n,i,k,l,u,found_index;
    printf("Enter total no. of elements of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
        printf("Enter elements of array of index a[%d]: ",i);
        scanf("%d",&a[i]);
     }
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    l=0;
    u=n-1;
    found_index=recursive_binary_search(a,l,u,k);
    if(found_index==0)
     {
       printf("Element not found");
     }
    else
    {
        printf("Element found at index %d",found_index);
    }

}