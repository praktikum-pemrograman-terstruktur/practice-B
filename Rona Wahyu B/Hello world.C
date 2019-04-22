#include <stdio.h>
#include <string.h>

int main ()
{
    char r[100];
    fgets(r, sizeof(r), stdin);
    printf("Hello, World!\n%s", r);
    
    return 0;
}
