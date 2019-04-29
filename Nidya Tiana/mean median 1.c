#include<stdio.h>

main()

{
 int i,j,a[20]={0},sum=0,n,t,b[20]={0},k=0,c=1,max=0,mode;
 float x=0.0,y=0.0;
 printf("\nMasukkan jumlah data\n");
 scanf("%d",&n);
 printf("Masukkan set bilangan");
 
 for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
 x=(float)sum/(float)n;
 printf("Mean\t= %f",x);

 for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
    }
    }

 if(n%2==0)
 y=(float)(a[n/2]+a[(n-1)/2])/2;
 else
 y=a[(n-1)/2];
 printf("\nMedian\t= %f",y);

 for(i=0;i<n-1;i++)
    {
    mode=0;
    for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
        {
    mode++;
    }
   }

  if((mode>max)&&(mode!=0))
   {
   k=0;
   max=mode;
   b[k]=a[i];
   k++;
   }
  else if(mode==max)
   {
    b[k]=a[i];
    k++;
   }
  }
 for(i=0;i<n;i++)
  {
    if(a[i]==b[i])
    c++;
  }
  
 if(c==n)
 printf("\nTidak ada Modus");
 else
  {
  printf("\nModus\t= ");
  for(i=0;i<k;i++)
  printf("%d ",b[i]);
  }
}