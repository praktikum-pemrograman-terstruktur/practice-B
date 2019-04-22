#include<stdio.h>
int main()
{
    char ch;
    char s[10];
    char sen[20];

    scanf("%c\n", &ch);
    scanf("%s\n", s);
    scanf("%[^\n]*c", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}