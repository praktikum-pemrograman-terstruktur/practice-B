#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char* arr[]={"one","two","three","four","five","six","seven","eight","nine"};
        for(int i=a;i<=b;i++)
            (i>=1 && i<=9) ? printf("%s\n", arr[i-1]) :
            (i%2==0 ? printf("even\n") :
            printf("odd\n"));
    return 0;
}

