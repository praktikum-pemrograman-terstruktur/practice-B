#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, jumlah=0;
    scanf("%d", &n);
    while (n>0){
        jumlah += (n%10);
        n=n/10;}
    printf ("%d \n", jumlah);
    
    return 0;
}