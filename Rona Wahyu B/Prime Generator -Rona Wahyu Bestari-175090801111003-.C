#include <stdio.h>
#include <stdlib.h>

int prima(int);

int main(void)
{
    int t, m, n;
    do
    {
        scanf("%d", &t);
        if(t>10)
            printf("T harus <=10 \n");
    }
    while(t>10);
    for (int i = 0; i < t; i++)
    {
        do
        {
            scanf("%d %d", &m, &n);
            if(1>m&&m>n&&n>1000000000&&(n-m)>100000)
                printf("m&n must (1<=m<=n<=1000000000, (n-m)<=100000)");
        }
        while(1>m&&m>n&&n>1000000000&&(n-m)>100000);
        for (int j = m; j <= n; j++)
        {
            if (prima(j))
            {
                printf("%d\n", j);
            }
        }
            if (i < t - 1) printf("\n");
    }

    return 0;
}

int prima(int num)
{
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}