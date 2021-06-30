// Problem 2 - Even Fibonacci numbers
#include <stdio.h>

int main() {
  int x, y, z;
  int sum = 0;
  int limit = 4000 * 1000;

  x = 0;
  y = 1;
  z = 1;

  while(z < limit) {
    if (!(z % 2)) {sum += z;}
    z = x + y;
    x = y;
    y = z;
  }
  printf("%d\n", sum);
}