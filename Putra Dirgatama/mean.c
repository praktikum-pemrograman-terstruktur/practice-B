#include <stdio.h>
int main ()
{
    int banyak;
    int jumlah = 0;
    int x;
    float rata;
    printf("Masukkan banyak nilai : ");
    scanf("%d", & banyak);
    for(x = 0; x < banyak; x++)
    {
        int temp;
        printf("Masukkan nilai ke-%d = ", x+1);
        scanf("%d", & temp);
        jumlah += temp;
    }
    rata = (float) jumlah / banyak;

    printf("\nTotal = %d\nBanyak nilai = %d\nRata rata = %.3f\n",
           jumlah, banyak, rata);
    return 0;
}