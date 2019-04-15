#include <stdio.h>

int main (){

    int m;
    int n;
    int p,q;

    float r;
    float s;
    float t,u;

    scanf("%d %d",&m ,&n);
    scanf("%f %f",&r ,&s);

    p = m + n;
    printf("%d\t",p);

    q = m - n;
    printf("%d\n",q);

    t = r + s;
    printf("%.1f\t",t);

    u = r - s;
    printf("%.1f\n",u);

    return 0;
    
}