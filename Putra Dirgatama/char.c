#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf ("%c\n", &ch);
    char s[70];
    scanf ("%s\n", s);
    char sen[70];
    scanf ("%[^\n]*c", sen);

    printf ("%c\n", ch);
    printf ("%s\n", s);
    printf ("%s\n", sen);
      
    return 0;
}