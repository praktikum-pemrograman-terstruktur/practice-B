#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;

    printf("masukkan nilai a = ");
    scanf("%d", &a);
    //b = 20;

    if (((a%2) == 0)){
        if (a%3 == 0 ){
            printf ("a bilangan genap habis dibagi 3");
        } else
        {
            printf("a bilangan genap tidak habis dibagi 3");
        }
        
    } else if (a%3 == 0 ){
        printf("a bukan bilangan genap");
    } else{
        printf("a bukan bilangan genap");
    }

    
}