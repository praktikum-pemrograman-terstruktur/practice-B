#include <stdio.h>
int main(){

    int nilai, a;
    printf("Tinggi Segitiga  : ");
    scanf("%d", &nilai);

    for (int i=0; i<= nilai; i++){
        for (int k=0; k<=((2*nilai)-(2*i)); k++){
            printf(" ");}
            
        for (int j=0; j<=i; j++)
        {if (j==0||i==j)
        {a = 1;}
        else {
        a=a*(i+1-j)/j;}
        printf("%4d", a);
        }
        printf("\n");
    }
    
    return 0;

}

    
            

