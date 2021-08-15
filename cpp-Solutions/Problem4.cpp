// Problem 4 - Largest palindrome product
#include <iostream>
#include <algorithm>
#include <string>

bool isPalindrome(int product);

int main() {
    int palindrome = 0;

    for (int i = 101; i < 1000; i++) {
        for (int j = 101; j < 1000; j++) {
            if (isPalindrome(i * j) && i * j > palindrome) {
                palindrome = i * j;
                std::cout << palindrome << "\n";
            }
        }
    }
}

bool isPalindrome(int product) {
    std::string inv_str = std::to_string(product);
    std::reverse(inv_str.begin(), inv_str.end());

    int inverse = std::stoi(inv_str);
    if (inverse == product) {return true;};
    return false;

}