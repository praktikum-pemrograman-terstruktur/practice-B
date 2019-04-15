#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int MAX_LEN=256;
    char c;
    char s[MAX_LEN];
    char sen[MAX_LEN];

    scanf("%c", &c);
    scanf("%s", &s);
    scanf(" %[^\n]%*c", &sen);

    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    return 0;
}