#include <stdio.h>

int main(void) {
  int a = 5;
  int b = 0; // 0b0000
  int currentBit = 0;
  int i;
  for (i = 0; i < 8; i++) {
    // printf("%d\n", 1 & (a >> i));
    currentBit = 1 & (a >> i);
    b = b | (currentBit << i);
  }
  printf("%d\n", b);
  return 0;
}
