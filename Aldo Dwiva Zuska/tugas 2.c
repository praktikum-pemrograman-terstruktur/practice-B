#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char ch[100];
    scanf("%s\n",&ch);
    char s[100];
    scanf("%s\n",&s);
    char sen[100];
    scanf("%[^\n]*c", sen);

    printf("%s\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);

return 0;
}