#include<stdio.h>

int main() {
  int n, i, j, temp = 0, q1, q2;
  float median;

  printf("                 PROGRAM SORTING WITH MEDIAN, MODUS AND MEAN  \n\n");
  printf("masukkan jumlah data: ");
  scanf("%d", & n);
  fflush(stdin);

  int data[n], frekuensi[n], modus, max = -1000, sum = 0;
  float mean;

  for (i = 0; i < n; i++) {
    printf("masukkan data ke-%d : ", i + 1);
    scanf("%d", & data[i]);
    sum = sum + data[i];
  }

  printf("\n");

  //median
  for (i = 0; i < (n - 1); i++) {
    for (j = i; j < n; j++) {
      if (data[j] < data[i]) {
        temp = data[i];
        data[i] = data[j];
        data[j] = temp;
      };
    };
  }

  printf("\ndata setelah diurutkan: ");
  for (i = 0; i < n; i++) {
    printf("%d,", data[i]);
  }
  if (n % 2 == 1) {
    q2 = (n / 2);
    median = data[q2];
    printf("\nmedian adalah: %.2f", median);
  } else if (n % 2 == 0) {
    q1 = (n / 2) - 1;
    q2 = (n / 2);
    median = ((float) data[q1] + (float) data[q2]) / 2;
    printf("\nmedian adalah: %.2f", median);
  }

  printf("\n");

  //mencari rata-rata
  mean = (float) sum / n;
  printf("mean adalah: %.2f\n", mean);

  //mencari modus
  for (i = 0; i < 10; i++) {
    frekuensi[i] = 0;
    for (j = 0; j < n; j++) {
      if (data[j] == i) {
        frekuensi[i] = frekuensi[i] + 1;
      };
    }
    if (frekuensi[i] > max) {
      max = frekuensi[i];
      modus = i;
    }
  };

  printf("modus adalah: %d\n\n", modus);

  printf("\t\tHISTOGRAM\n");
  for (i = 0; i < 10; i++) {
    if (frekuensi[i] != 0) {
      printf("%d- ", i);
      for (j = 0; j < frekuensi[i]; j++) printf("*");
      printf("\n");
    };
  };

  system("pause");
  return 0;
}