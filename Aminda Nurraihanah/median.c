#include <stdio.h>

/*void swap(int a, int b){
             int c = arr[a];
            arr[a] = arr[b];
            arr[b] = c;
            x = x+1;
    }

    
void sort(int arr[], int n){
    int i, j, temp;
        //start = clock();
        for(int i = 0; i < n-1; i++){
            int min = arr[i];
            int idx = i;

            for(int j=i+1; j<n; j++){
                if(arr[j]<min)
                {
                    min = arr[j];
                    idx =j;
                }
            }
            swap(i, idx);
        }
    
        int main(){
        int n = 15;
        int arr[] = {3,44,38,5,47,15,36,26,27,2,46,4,15,50,48};

        n = (n+1)/ 2 - 1;
        
        printf("median = %d", arr[n]);
        return 0;
    }*/

void swap(int *p, int *q){
    int t;

    t=*p;
    *p=*q;
    *q=t;
}
void sort(int arr[], int n){
    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
        }
    }
}
int main(){
    int n = 15;
    int arr[] = {3,44,38,5,47,15,36,26,27,2,46,4,15,50,48};
    int sum, i;

    sort(arr, n);

    n = (n+1)/2-1;
    printf("median = %d", arr[n]);
    return 0;
}

