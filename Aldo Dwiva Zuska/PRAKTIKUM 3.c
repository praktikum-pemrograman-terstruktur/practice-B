#include <stdio.h>

int main(){
    int a, swap=0, arr[a];
    int frek[a], max=-100, modus;
    int med_1, med_2;
    float sum, mean, median;

    printf("banyak data yang akan dihitung: ");
    scanf("%d", &a);

    for(int i=0; i<a; i++){
        printf("data ke-%d: ",i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<a-1; i++){
        for (int j=i+1; j<a; j++){
            if (arr[j]<arr[i]){
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }

    for(int i=0; i<a; i++){
        sum+=arr[i];
        mean=sum/a;
    }


    for(int i=0; i<a; i++){
        if(a%2==1){
            med_2=(a/2);
            median=arr[med_2];
        }
    
        else if(a%2==0){
            med_1=((a/2)-1);
            med_2=(a/2);
            median=((float)arr[med_1]+(float)arr[med_2])/2;
        }
    }

        for(int i=0; i<10; i++){
            frek[i]=0;
            for(int j=0; j<a; j++){
                if(arr[j]==i){
                    frek[i]+=+1;}}
                if(frek[i]>max){
                    max=frek[i];
                    modus=i;}
        }

        printf("Hasil Dari Sorting \t= ");
        for(int i=0; i<a; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");

        printf("Mean\t\t= %.2f\n", mean);
        printf("Median\t\t= %.2f\n", median);
        printf("Modus\t\t= %d\n", modus);


        return 0;


}