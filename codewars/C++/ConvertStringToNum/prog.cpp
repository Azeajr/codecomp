#include <iostream>
#include <string>

int string_to_number(const std::string &s) {
  double number = 0.0;
  bool neg = false;

  for (auto var : s) {
    if (var == '-') {
      neg = true;
    } else {
      number = (number * 10) + (var - 48);
    }
  }
  if (neg) {
    number *= -1;
  }

  return number;
}

int main(int argc, char const *argv[]) {
  std::cout << string_to_number("-124") << std::endl;
  return 0;
}
