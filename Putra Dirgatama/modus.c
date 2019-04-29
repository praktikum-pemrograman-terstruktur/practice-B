#include <stdio.h>
int main()
{
    int n, a, b;
    printf("Masukkan jumlah data : "); 
    scanf("%d",&n);
    int data[n],frekuensi[n], modus, max=-1000, sum=0;
    
for(a=0;a<n;a++)
    {
        printf("Masukkan data ke-%d = ",a+1);
        scanf("%d",&data[a]);
        sum=sum+data[a];
    }
    printf("\n\n");
for(a=0; a<10; a++)
    {
        frekuensi[a]=0;
        for(b=0; b<n; b++)
        {
            if(data[b]==a) {frekuensi[a]=frekuensi[a]+1;}
        }
        if(frekuensi[a]>max) {max=frekuensi[a];modus=a;}
    }
    printf("Modus = %d\n\n",modus);
return 0;
}