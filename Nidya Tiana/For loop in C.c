#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf ("%d \n %d", &a, &b);

    char* arr[] = {"one","two","three","four","five","six","seven","eight","nine"};
    for (int z=a ; z<=b ; z++)
       (z>=1 && z<=9) ? printf("%s\n", arr[z-1]) : (z%2==0 ? printf("even\n") : printf("odd\n"));

    return 0;
}