#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    int i;
    scanf("%d \n %d", &a, &b);
    
    char labels[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    int labels_index;
  	for (i=a; i<=b; i++) {
        labels_index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", labels[labels_index]);
    }

    return 0;
}