#include <stdio.h>

int n = 15;
int x=0;
int arr[] = {3,44,38,5,47,15,36,26,27,2,46,4,15,50,48};

//clock_t start, end;
double cpu_time_used;

    void swap(int a, int b){
             int c = arr[a];
            arr[a] = arr[b];
            arr[b] = c;
            x = x+1;
    }

    int main(void){

        //start = clock();
        for(int i = 0; i<n-1; i++){
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
        //end = clock();
        //cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
        for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    }