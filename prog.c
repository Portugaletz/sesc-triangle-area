#include <stdio.h>
#include <math.h>

int main(void) {
  float len;
  scanf("%f", &(len));
  printf("%f\n", len);
  printf("%g", (len*len*sqrt(3))/4);
  return 0;
}
