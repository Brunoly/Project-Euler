// Problem 7 = 10001st prime
#include <iostream>
#include <vector>

bool isPrime(int x, std::vector<int> &primes);

int main() {
  std::vector<int> primes = {2};
  int limit = 10001;

  int num = 3;
  while (primes.size() < limit) {
    if (isPrime(num, primes)) {
      primes.push_back(num);
    }
    num++;
  }

  std::cout << primes[primes.size() - 1] << "\n";
}

bool isPrime(int x, std::vector<int> &primes) {
  for (int i = 0; i < primes.size(); i++) {
    if (x % primes[i] == 0) {return false;};
  }
  return true;
}