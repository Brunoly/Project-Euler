// Problem 3 - Largest prime factor
#include <iostream>
#include <vector>

bool isPrime(int x, std::vector<int> &primes);

int main() {
    std::vector<int> primes = {2};
    long long int limit = 600851475143;
    int prime_factor;

    for (int num = 2; num <= limit; num++) {
        if (limit % num == 0 && isPrime(num, primes)) {
            prime_factor = num;
            limit /= prime_factor;
            primes.push_back(num);
            num--;
        }
    }
    std::cout << prime_factor << "\n";
}

bool isPrime(int x, std::vector<int> &primes) {
    for (int i = 0; i < primes.size(); i++) {
        if (x % primes[i] == 0) {
            return false; 
        }
    }
    return true;
}