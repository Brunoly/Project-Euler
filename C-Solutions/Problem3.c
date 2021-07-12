// Problem 3 - Largest prime factor
#include <stdio.h>

int isPrime(long x, long primes[]);
void setPrimes(long primes[], long size);

int main() {
  int size = 1000;
  long primeFactor = 0;
  long long int limit = 600851475143;
  long primes[size];

  setPrimes(primes, size);

  for (long i = 3; i <= limit; i += 2) {
    int prime = isPrime(i, primes);
    int factor = !(limit % i);
    if (prime && factor) {
      primeFactor = i;
      limit /= primeFactor;
    }
  }
  printf("%li\n", primeFactor);
}

int isPrime(long x, long primes[]) {
  int index = 0;
  while(primes[index] != 0) {
    int result = !(x % primes[index]);

    if (result) {return 0;}

    index++;
  }
  primes[index] = x;
  return 1;
}

void setPrimes(long primes[], long size) {
  for (int i = 0; i < size; i++) {
    primes[i] = 0;
  }
  primes[0] = 2;
}
