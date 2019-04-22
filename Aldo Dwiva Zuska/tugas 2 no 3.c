#include <stdio.h>

int main (){

    int x, y;
    scanf("%d \n %d", &x, &y);

    char* arr[] = {"one", "two","three","four","five","six","seven","eight","nine"};

    for (int z=x ; z<=y ; z++)
    (z>=1 && z<=9) ? printf("%s\n", arr[z-1]) : (z%2==0 ? printf("even\n") : printf("odd\n"));

    return 0;

}