#include <stdio.h>

int main()
{
    int n=15;
    int arr[15]={3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                int swap =  arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

return 0;
}
