#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, j;
    float a, b;
    scanf("%d %d %f %f", &i, &j, &a, &b);
    printf("%d %d\n%.1f %.1f", i+j, i-j, a+b, a-b);
	
    
    return 0;
}