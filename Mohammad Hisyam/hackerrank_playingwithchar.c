#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    
    char ch, a[100], b[100];

    scanf("%c", &ch);
    scanf("%s\n", a);
    scanf("%[^\n]%*c", b);

    printf("%c\n%s\n%s", ch, a, b );
    

    return 0;
}
