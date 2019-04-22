#include <stdio.h>

int main(){
    int n, jumlah;
    scanf ("%d", &n);
    while (n>0)
    {
        jumlah += (n%10);
        n=n/10;
    }
    printf("%d\n", jumlah);

    return 0;
}