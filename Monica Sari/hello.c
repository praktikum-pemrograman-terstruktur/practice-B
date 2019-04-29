#include <stdio.h>

void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}

void selectionsort(int arr[],int n)
{
    int i,j,min_idx;

    //one by one move boundary of unsorted subarray
    for(i=0;i<n-1;i++)
    {
        //find the minimum element in unsorted array
        min_idx=i;
        for(j=i+1;j<n;j++)
        if(arr[j]<arr[min_idx])
        min_idx=j;
        //swap the found minimum element with the first element
        swap(&arr[min_idx],&arr[i]);
    }
}

/*function to print array */
void printarray(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    printf(" %d" ,arr[i]);
    printf("\n");
}

//driver program to test above functions
int main()
{
    int arr[]={65,25,15,20,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    printf("sorted array:\n");
    printarray(arr,n);
    return 0;
}