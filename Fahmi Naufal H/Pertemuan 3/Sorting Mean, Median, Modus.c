#include<stdio.h>
int main ()
{
    int n,a,b,temp = 0, q1, q2;
    float median;
    printf ("\t\t\tPROGRAM MEDIAN, MEAN, MODUS\n");

    //inputkan jumlah data
    printf("masukkan jumlah data: "); scanf("%d",&n);

    //inputkan data
    int data[n], frekuensi[n], modus, max=-1000, sum=0;
    float mean;

    for(a=0;a<n;a++)
        {
            printf("masukkan data ke-%d : ",a+1);scanf("%d",&data[a]);
            sum=sum+data[a];
        }
    printf("\n\n");

     //hasil median
    for(a=0; a<(n-1); a++)
        {
            for(b=a; b<n; b++)
            {
                if(data[b]<data[a])
                {
                    temp = data[a];
                    data[a] = data[b];
                    data[b] = temp;
                };
            };
        }
    printf("\nData setelah diurutkan: ");
    for(a=0; a<n; a++)
        {
            printf("%d,",data[a]);
        }
    if(n%2==1)
        {
            q2 = (n/2);
            median = data[q2];
            printf("\nmedian adalah\t: %.2f",median);
        }
    else if(n%2==0)
        {
            q1 = (n/2)-1; q2=(n/2);
            median = ((float)data[q1]+(float)data[q2])/2;
            printf("\nmedian adalah\t: %.2f",median);
        }
    printf("\n");

    //Hasil Mean
    mean=(float)sum/n;
    printf("mean adalah\t: %.2f\n",mean);

    //Hasil modus
    for(a=0;a<10;a++)
        {
            frekuensi[a] = 0;
            for(b=0; b<n; b++)
            {
                if(data[b]==a){frekuensi[a] = frekuensi[a]+1;};
            }
                if(frekuensi[a]>max)
                    {
                        max = frekuensi[a]; modus=a;
                    }
        };
    printf("modus adalah\t: %d\n\n",modus);

    //histogram
    printf("\t\t\tHISTOGRAM\n");
    for(a=0; a<10; a++)
        {
            if(frekuensi[a]!=0)
            {
                printf("%d- ",a);
                for(b=0; b<frekuensi[a]; b++) printf("*");
                printf("\n");
            };
        };
    system("pause");

    return 0;
}
