#include <stdio.h>

int main()
{
    int n, swap=0, arr[n];
    int frek[n], max=-100, modus;
    int med_1, med_2;
    float sum, mean, median;
    
    printf("masukkan jumlah data: "); //Input nilai n
    scanf("%d", &n);

    for(int i=0; i<n; i++){         //Input data
        printf("data ke-%d: ",i+1);
        scanf("%d",&arr[i]);}

    for(int i=0; i<n-1; i++){       //Sorting
        for (int j=i+1; j<n; j++){ 
        if (arr[j]<arr[i]){
            swap=arr[i];
            arr[i]=arr[j];
            arr[j]=swap;}
        }
    }

    for(int i=0; i<n; i++){         //Mean
        sum+=arr[i];
        mean=sum/n;
    }

    for(int i=0; i<n; i++){         //Median
        if(n%2==1){
            med_2=(n/2);
            median=arr[med_2];}
        else if(n%2==0){
            med_1=((n/2)-1);
            med_2=(n/2);
            median=((float)arr[med_1]+(float)arr[med_2])/2;
            } 
    }
    
    for(int i=0; i<10; i++){        //Modus
        frek[i]=0;
        for (int j=0; j<n; j++){
        if(arr[j]==i){
            frek[i]+=1;}}
        if(frek[i]>max){
            max=frek[i];
            modus=i;}
        }  
    
    printf("Hasil Sorting \t= "); //Print Hasil Sorting
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);}
        printf("\n");
    
    printf("Mean\t\t= %.2f\n", mean); //Print Hasil Mean
    printf("Median\t\t= %.2f\n", median); //Print Hasil Median
    printf("Modus\t\t= %d\n", modus); //Print Hasil Modus
      

return 0;
}
