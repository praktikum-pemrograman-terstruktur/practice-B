#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i; 
    scanf("%d", &i);

    int len = i*2 - 1;
    for (int s=0; s<len; s++)
        {
            for(int t=0; t<len; t++)
            {
                int min = s < t ? s: t;
                min = min < len - s ? min : len-s-1;
                min = min < len-t-1 ? min : len-t-1;
                printf("%d ", i-min);
            }
        printf("\n");
        }

    return 0;

}