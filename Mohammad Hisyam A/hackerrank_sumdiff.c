#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  
int x, y;
float z, o;

scanf("%d%d%f%f",&x ,&y, &z, &o);

printf("%d %d\n%.1f %.1f", x+y, x-y, z+o, z-o);

return 0;

}
