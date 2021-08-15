// Problem 5 - Smallest multiple
#include <iostream>

bool isValid(int x);

int main() {
  int i = 20;

  while(!isValid(i)) {
    i++;
  }
  std::cout << i << "\n";
}

bool isValid(int x) {
  for (int i = 1; i <= 20; i++) {
    if (x % i != 0) {return false;};
  }

  return true;
}