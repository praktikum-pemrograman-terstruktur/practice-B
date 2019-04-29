#include <stdio.h>

int empat_angka(int a, int b, int c ,int d){

    return(((a>b?a:b)>c?(a>b?a:b):c)>d?((a>b?a:b)>c?(a>b?a:b):c):d) ;
}

int main(){
int a, b, c, d;
scanf ("%d %d %d %d %d", &a, &b, &c, &d);
int jwb=empat_angka(a, b, c, d);
printf ("%d", jwb);

return 0;
}
