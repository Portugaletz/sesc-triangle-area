#include <stdio.h>
#include <math.h>

int main(void) {
  float len;
  scanf("%f", &(len));
  if (len>0){
  printf("%f\n", len);
  printf("%g", (len*len*sqrt(3))/4);
  return 0;
  }else{return -1;}
}
