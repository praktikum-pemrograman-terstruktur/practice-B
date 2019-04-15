#include<stdio.h>
int main()
{
    int i,j;
    float k,l;
    scanf("%d %d", &i, &j);
    scanf("%f %f", &k, &l);

    printf("%d %d\n", i+j, i-j);
    printf("%.1f %.1f\n", k+l, k-l);
    return 0;
}