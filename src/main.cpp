#include <iostream>

#include "utils.cpp"

int main() {
  int a = 10, b = 20;
  int summa = summ(a, b);
  int different = diff(a, b);
  std::cout << summa << ' ' << different << std::endl;
  return 0;
}
