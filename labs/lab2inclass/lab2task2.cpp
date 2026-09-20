#include <iostream>

int main() {
  int number;
  int sum = 0;

  std::cin >> number;
  
  sum += number % 10;
  sum += (number / 10) % 10;
  sum += number / 100;

  std::cout << sum << std::endl;
   
}
