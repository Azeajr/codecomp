// #include <algorith>
#include <iostream>
#include <string>
#include <vector>

std::string multiply_strings(std::string a, std::string b) {
  std::string product = "";
  int interimProduct;
  int carry = 0;

  for (int digitB = b.length() - 1; digitB >= 0; digitB--) {
    for (int digitA = a.length() - 1; digitA >= 0; digitA--) {
      interimProduct = (b[digitB] - '0') * (a[digitA] - '0') + carry;
      carry = interimProduct / 10;
      interimProduct %= 10;

      product.insert(0, std::to_string(interimProduct));
    }
  }

  if (carry > 0) {
    product.insert(0, std::to_string(carry));
  }
  
  return product;

  // for (int &&digitB : b)
  // {
  //   for (auto &&digitA : a)
  //   {
  //     interimProduct = (digitB - '0') * (digitA - '0');
  //     carry = interimProduct / 10;
  //     interimProduct %= 10;
  //   }
  // }

  // return std::vector<std::string>{quotient, a};
}

int main(int argc, char const *argv[]) {
  std::string multiplicand = argv[1];
  std::string multiplier = argv[2];

  std::cout << multiply_strings(argv[1], argv[2]) << std::endl;

  // for (auto x : multiply_strings(argv[1], argv[2])) {
  //   std::cout << x << std::endl;
  // }

  // std::string temp1 = argv[1];
  // std::string temp2 = argv[2];

  // std::cout << temp1 << "\t" << temp2 << std::endl;
  // subtract_strings(&temp1, &temp2);

  // std::cout << temp1 << "\t" << temp2 << std::endl;

  // std::cout << temp1 << std::endl;std::cout << temp1 << std::endl;
  // increment_string(&temp1);
  // s
  // increment_string(&temp1);
  // std::cout << temp1 << std::endl;

  return 0;
}