#include <stdio.h>

int main()
{
    int x, swap=0, arr[x], frek[x], max=-50, modus, med_a, med_b;
    float sum, mean, median;
    printf ("Masukkan data:"); 
    scanf ("%d", &x);

    for (int t=0; t<x; t++){         
        printf("data ke-%d: ",t+1);
        scanf("%d",&arr[t]);}
    
    for(int t=0; t<x-1; t++){      
        for (int e=t+1; e<x; e++){ 
        if (arr[e]<arr[t]){
            swap=arr[t];
            arr[t]=arr[e];
            arr[e]=swap;}}}

    for(int t=0; t<x; t++){        
        sum+=arr[t];
        mean=sum/x;}

    for(int t=0; t<x; t++){        
        if(x%2==1){
            med_b=(x/2);
            median=arr[med_b];}
        else if(x%2==0){
            med_a=((x/2)-1);
            med_b=(x/2);
            median=(arr[med_a]+arr[med_b])/2;
            }}

    for(int t=0; t<5; t++){       
        frek[t]=0;
        for (int e=0; e<x; e++){
        if(arr[e]==t){
            frek[t]+=+1;}}
        if(frek[t]>max){
            max=frek[t];
            modus=t;}}  

    printf("Hasil Sorting \t= "); 
    for(int t=0; t<x; t++){
        printf("%d ", arr[t]);}
        printf("\n");
    printf("Mean\t\t= %.2f\n", mean); 
    printf("Median\t\t= %.2f\n", median); 
    printf("Modus\t\t= %d\n", modus); 

return 0;
} 