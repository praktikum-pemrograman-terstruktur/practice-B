#include<stdio.h>

int main()
{
    int n, a, b, temp=0,q1 ,q2;
    float median;

    //input jumlah data
    printf("Masukkan jumlah data : ");
    scanf("%d", &n);

    //input data
    int data[n], sum=0;
    for(a=0; a<n; a++)
    {
        printf("Masukkan data ke-%d = ", a+1);
        scanf("%d", &data[a]);
        sum=sum+data [a];
    }
    printf("\n");
    
     //median
    for(a=0; a<(n-1); a++)
    {
        for(b=a; b<n; b++)
        {
        if(data[b]<data[a])
            {
            temp=data[a];
            data[a]=data[b];
            data[b]=temp;
            }
        }
    }
    printf("\nData setelah diurutkan = ");

    for(a=0; a<n; a++)
    {
        printf("%d, ",data[a]);
    }
    if(n%2==1)
    {
        q2=(n/2);
        median=data[q2];
        printf("\nMedian = %.2f",median);
    }
    else if(n%2==0)
    {
        q1=(n/2)-1; q2=(n/2);
        median=((float)data[q1]+(float)data[q2])/2;
        printf("\nMedian : %.2f",median);
    }
return 0;
}