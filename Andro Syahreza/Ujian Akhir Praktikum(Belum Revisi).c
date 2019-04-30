# include <stdio.h>

int main () {

    int arr [50];
    int arr2 [50];
    int n,b;
    int m,c;
    int max, max2;
    int sum;

    printf("jumlah bilangan untuk baris 1: ");
    scanf ("%d",&n);

    for (int b=1; b<=n; b++) {
        printf("Baris 1 Bilangan ke-%d: ",b);
        scanf("%d",&arr[b]);}
    
    max=arr[1];
    for (int b=1; b<=n; b++)
        if (arr[b]>=max){
        max = arr[b];}
    
    printf("jumlah bilangan untuk baris 2: ");
    scanf ("%d", &m);

    for (int c=1; c<=m; c++) {
        printf("Baris 2 Bilangan ke-%d: ",c);
        scanf("%d",&arr2[c]);}
   
    max2=arr2[1];
    for (int c=1; c<=m; c++)
        if (arr2[c]>=max2){
        max2 = arr2[c];}

    for (int b=1; b<=n; b++){
        printf("%2i", arr[b]);}
        printf("\n");
    for (int c=1; c<=m; c++)
        printf("%2i", arr2[c]);

    printf("\nnilai tertinggi baris ke-1:%d", max);
    printf("\nnilai tertinggi baris ke-2:%d", max2);
    printf("\nJumlah kedua nilai maksimal:%d", max+max2);

return 0;
}

