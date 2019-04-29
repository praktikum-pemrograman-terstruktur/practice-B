#include <stdio.h>
#define MAX(x,y) (((x)>(y))?(x):(y))

int max_of_four(int a,int b,int c,int d)
{
    int max = MAX(a,b);
    max = MAX(max,c);
    max = MAX(max,d);
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

