#include <stdio.h>

int main(){
    int o, p, q, r;
    scanf("%d %d %d %d", &o, &p, &q, &r);

    if (o>p && o>q && o>r)
    {printf("%d",o);}

    if (p>o && p>q && p>r)
    {printf("%d",p);}

    if (q>o && q>p && q>r)
    {printf("%d",q);}

    if (r>o && r>p && r>q)
    {printf("%d",r);}
    
        
    return 0;
}