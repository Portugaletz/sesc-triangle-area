#include <stdio.h>
#include <math.h>

int main(void) {
  float len;
  scanf("%g", &(len));
  if (len>0){
  printf("%g", (len*len*sqrt(3))/4);
  return 0;
  }else{return 1;}
}
