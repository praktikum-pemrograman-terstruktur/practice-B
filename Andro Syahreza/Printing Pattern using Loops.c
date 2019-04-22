#include <stdio.h>

int main(){
    int n, min;
    scanf("%d", &n);
    int m = n * 2 - 1;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            if (i < j){
                min = i;}
            else{
                min = j;}

            if (min < m - i){
                min = min;}
            else{
                min = m - i - 1;}

            if (min < m - j - 1){
                min = min;}
            else{
                min = m - j - 1;}

            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}

