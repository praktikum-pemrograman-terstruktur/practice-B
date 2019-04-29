#include <stdio.h>

int main() 
{

    int n;
    int x, y;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(x=0; x<len; x++)
    {
        for(y=0; y<len; y++)
        {
            int min = x < y ? x : y;
            min = min < len-x ? min : len-x-1;
            min = min < len-y-1 ? min : len-y-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}