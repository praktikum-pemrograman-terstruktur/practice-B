#include <stdio.h>
int main ()
{
    int n,a,b,temp=0,q1,q2;
    float median;
    printf("masukkan jumlah data: "); 
    scanf("%d",&n);
    int data[n];
    //,frekuensi[n], 
    int max =-1000;
    int sum=0;
    
    
    for(a=0;a<n;a++){
        printf("masukkan data ke-%d <0..9>: ",a+1);
        scanf("%d",&data[a]);
        sum=sum+data[a];
        }
                     
    printf("\n\n");
    for(a=0;a<(n-1);a++){
        for(b=a;b<n;b++){
        if(data[b]<data[a]){
            temp=data[a];
            data[a]=data[b];
            data[b]=temp; };                    
            };
            }
    printf("\ndata setelah diurutkan: ");
    for(a=0;a<n;a++){
        printf("%d,",data[a]);}
    if(n%2==1){q2=(n/2);
         median=data[q2];
        printf("median adalah: %.2f",median);}
    else if(n%2==0){q1=(n/2)-1; q2=(n/2);
        median=((float)data[q1]+(float)data[q2])/2;
        printf("\nmedian adalah: %.2f",median);}
    
    printf("\n");
    return 0;
}