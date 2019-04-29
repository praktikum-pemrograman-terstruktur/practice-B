#include <stdio.h>

int main(){
    float mean;
    int sum, i;
    int n = 15;
    int arr[] = {3,44,38,5,47,15,36,26,27,2,46,4,15,50,48};

    sum = 0;

    for(i=0; i<n; i++){
        sum += arr[i];
    }
    printf("Mean = %f", sum/(float)n);

    return 0;
}