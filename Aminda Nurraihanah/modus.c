#include <stdio.h>

int mode(int arr[], int n){
    int maxvalue = 0, maxcount = 0, i, j;

    for (i=0; i<n; ++i){
        int count = 0;

        for (j=0; j<n; ++j){
            if (arr[j] == arr[i])
            ++count;
            }
            if (count > maxcount){
                maxcount = count;
                maxvalue = arr[i];
            }
        }
    return maxvalue;
    }
    int main(){
        int n = 15;
        int arr[] = {3,44,38,5,47,15,36,26,27,2,46,4,15,50,48};

        printf("mode = %d", mode(arr, n));
        
        return 0;
}