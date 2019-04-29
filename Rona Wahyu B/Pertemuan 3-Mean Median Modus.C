#include <stdio.h>

int main()
{
    int n, swap=0, arr[n];
    int frek[n], max=-100, modus;
    int med_1, med_2;
    float sum, mean, median;

    printf("masukkan jumlah data: "); 
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        {    
        printf("data ke-%d: ",i+1);
        scanf("%d",&arr[i]);
        }

    for(int i=0; i<n-1; i++)
    {     
        for (int j=i+1; j<n; j++)
        { 
        if (arr[j]<arr[i]){
            swap=arr[i];
            arr[i]=arr[j];
            arr[j]=swap;}
        }
    }

//mean
    for(int i=0; i<n; i++)
    {      
        sum+=arr[i];
        mean=sum/n;
    }

//Median
    for(int i=0; i<n; i++)
    {         
        if(n%2==1)
        {
            med_2=(n/2);
            median=arr[med_2];
        }
        else if(n%2==0)
        {
            med_1=((n/2)-1);
            med_2=(n/2);
            median=(arr[med_1]+arr[med_2])/2;
        } 
    }

 //Modus
    for(int i=0; i<10; i++)
    {
        frek[i]=0;
        for (int j=0; j<n; j++)
        {
        if(arr[j]==i)
            {
            frek[i]+=+1;
            }
        }
        if(frek[i]>max)
        {
            max=frek[i];
            modus=i;
        }
    }  

    printf("Hasil Sorting \t= "); 
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
        printf("\n");

    printf("Mean\t\t= %.2f\n", mean); 
    printf("Median\t\t= %.2f\n", median); 
    printf("Modus\t\t= %d\n", modus); 

return 0;
} 