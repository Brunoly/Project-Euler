// Problem 6 - Sum square difference
#include <iostream>
#include <cmath>

int main() {
  int sum_squares = 0;
  int square_nums = 0;
  int difference;

  for (int i = 1; i <= 100; i++) {
    sum_squares += pow(i, 2);
    square_nums += i;
  }

  square_nums = pow(square_nums, 2);
  difference = square_nums - sum_squares;
  
  std::cout << difference << "\n";
}