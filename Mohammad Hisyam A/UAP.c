#include <stdio.h>

int main()
{
  int input, counterinput, counter;
  int c, d; 
  
  printf("            PRIME GENERATOR\n");
  printf("input banyak data : ");
  scanf("%d", & input);

  counterinput = 1;
  c = 1;

  while (counterinput <= input) {
    /*angka 2 termasuk bilangan prima */
    if (c == 2)
    {
      counterinput++;
      printf("%d   ", c);
    }

    /*bilangan ganjil dan bukan angka 1*/
    else if (c % 2 == 1 && c != 1) {
      d = 0;
      for (counter = 1; counter <= c; counter++) {
        if (c % counter == 0) {
          d++;
        }
      }
      if (d == 2) {
        counterinput++;
        printf("%d   ", c);
      }
    }
    c++;
  }
  return 0;
}