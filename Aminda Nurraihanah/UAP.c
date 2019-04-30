#include <stdio.h>

int main()
{
    int r, c, s, n, no;
    printf("enter number for number of row");
    scanf("%d", &no);
    for(r=0; r<=no; r++){//r adalah outer loop
        for(s=0; s<=(no-r); s++){//s adalah space
            printf("");
        }
        n=1;
        for(c=0; c<=r; c++){//c adalah inner loop
            printf("%d\t", n);
            n = n*(r-c)/(c+1);//n adalah koefisien
        }
        printf("\n");
    }
    return 0;
}