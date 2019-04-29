#include <stdio.h>
int main()
{
    int A[20],temp,i,j,n=5;
    printf("Sorting data dengan Bublle sort \nMasukkan %d nilai : \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\nSebelum Sorting = ");

    for(i=0;i<n;i++){printf("%d ",A[i]);}

    for(i=n-2; i>=0; i--){
        for(j=0; j<=i; j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("\nSetelah Sorting = ");
    for(i=0;i<n;i++) {printf("%d ",A[i]);}
return 0;
}