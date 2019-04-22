#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (){
    char ch;
    char s [10];
    char sen [100];

    scanf ("%c\n", &ch);
    scanf ("%s\n", s);
    scanf ("%99 [^\n] %*c", sen);

    printf("\n%c\n", ch);
    printf("%s\n", s);
    printf("%s\n" sen);

return 0;
}