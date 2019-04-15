#include <stdio.h>
int main(){

    int a;
    int b;
    int c,d;
    float x;
    float y;
    float o,p;

    scanf("%d %d",&a ,&b);
    scanf("%f %f",&x ,&y);
    c = a + b;
    printf("%d\t",c );
    d = a - b;
    printf("%d\n",d);
    o = x + y;
    printf("%.1f\t",o);
    p = x - y;
    printf("%.1f\n",p);
}