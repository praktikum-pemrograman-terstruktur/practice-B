#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int z;
    int x;
    int c,v;
    float q;
    float w;
    float e,r;

    scanf ("%d %d",&z ,&x);
    scanf ("%f %f",&q ,&w);
    c = z+x;
    printf ("%d\t", c);
    v = z-x;
    printf ("%d\n", v);
    
    e = q+w;
    printf ("%.1f\t", e);
    r = q-w;
    printf ("%.1f\n", r);

    return 0;
}