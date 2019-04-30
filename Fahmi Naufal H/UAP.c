#include<stdio.h>

int main()
{
    int a = 5;
    int sum[a][a];

    printf("\n"
           "\tSum in a triangle\t:\n"
           "\n\n");
    for(int i = 1 ; i <= a; i++)
    {
        for(int sum_j = 1 ; sum_j <= i ; sum_j++ )
        {
            if(sum_j == 1 || sum_j == i)
            {
                sum[i][sum_j] = 1;
            }
            else
            {
                sum[i][sum_j] = sum[i-1][sum_j-1] + sum[i-1][sum_j];
            }
            printf("%d ",sum[i][sum_j]);
        }
        printf("\n");
    }
    return(0);
}

