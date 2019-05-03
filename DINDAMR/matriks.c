#include <stdio.h>

int main()
{
   
    int matriksX[3][3];
    int matriksY[3][3];
    int hasil[3][3];

    printf("Matriks X\n");
    for (int a = 0; a < 3; a++)
    {
       for (int b = 0; b < 3; b++)
       {
          printf("elemen[%d][%d]: ", a, b);
          scanf("%d", &matriksX[a][b]);
       }
    }

    printf("Matriks Y\n");
    for (int a = 0; a < 3; a++)
    {
       for (int b = 0; b < 3; b++)
       {
          printf("elemen[%d][%d]: ", a, b);
          scanf("%d", &matriksY[a][b]);
       }
    }

    for (int a = 0; a < 3; a++)
    {
       for (int b = 0; b < 3; b++)
       {
          hasil[a][b] = matriksX[a][b] + matriksY[a][b];
       }
    }

    printf("Hasil penjumlahan:\n");
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            printf("%d ", hasil[a][b]);
        }
        printf("\n\n");
    }

    return 0;
}