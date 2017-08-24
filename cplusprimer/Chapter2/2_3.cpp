#include <iostream>

int main(int argc, char ** argv)
{
  unsigned u = 10, u2 = 20;
  std::cout << u - u2 << std::endl;
  std::cout << u2 - u << std::endl;

  int i = 10, i2 = 43;
  std::cout << i - i2 << std::endl;
  std::cout << i2 - i << std::endl;
  std::cout << i - u << std::endl;

  i = -10;
  std::cout << i - u2 << std::endl;

  return 0;
}
