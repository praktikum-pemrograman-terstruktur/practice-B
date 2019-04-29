#include <stdio.h>
int main()
{
    int A[20],temp,i,j,n=6;
    printf("Sorting data dengan Bublle sort \nmasukkan %d nilai: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);}

    printf("\nsebelum sorting: ");

    for(i=0;i<n;i++){printf("%d ",A[i]);}

    for(i=n-2;i>=0;i--){
        for(j=0;j<=i;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("\nsetelah sorting: ");
    for(i=0;i<n;i++){printf("%d ",A[i]);}
    printf("\n");
}
