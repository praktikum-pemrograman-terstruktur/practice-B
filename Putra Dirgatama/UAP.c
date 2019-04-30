#include <stdio.h>

int main()
{
int nilai, a, i, j, k;
printf("Input: n = ");
scanf("%i", &nilai);
printf("Output :\n");
for (i=0; i<=nilai; i++) 
    {
    for (k=0; k<=((2*nilai)-(2*i)); k++) {printf(" ");}
        for (j=0; j<=i; j++)
        {
            if (j==0) {a=1;}
            else {a=a*(i+1-j)/j;}
            printf("%4i", a);
        }
    printf("\n");
    }
return 0;
}