// Given a random non-negative number, you have to return the digits of this
// number within an array in reverse order.
#include <iostream>
#include <vector>

std::vector<int> digitize(unsigned long n) {
  std::vector<int> result;

  if (n == 0) {
    result.push_back(n);
    return result;
  }

  while (n > 0) {
    result.push_back(n % 10);
    n /= 10;
  }

  return result;
}

int main(int argc, char const *argv[]) {
  unsigned long n;
  std::cout << "Enter a positive integer: " << std::endl;
  std::cin >> n;

  for (auto x : digitize(n)) {
    std::cout << x << ", ";
  }

  return 0;
}