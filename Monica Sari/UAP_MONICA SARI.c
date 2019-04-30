#include <stdio.h>
int is_prime(int);

int main(void)
{
    int t,m,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d", &m, &n);
        for (int j=m;j<=n;j++)
        {if (is_prime(j))
            {printf("%d\n", j);}
        }
    if (i < t - 1) printf("\n");
    }

    return 0;
}

int is_prime(int num)
{if (num <= 1) return 0;
    for (int i=2;i*i<=num;i++)
    {if (num % i == 0)
        {return 0;
        }
    }
    return 1;
 }