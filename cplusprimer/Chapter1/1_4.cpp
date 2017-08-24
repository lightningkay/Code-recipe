#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "input two numbers" << std::endl;
    int val1, val2;
    std::cin >> val1 >> val2;
    std::cout << "sum = " << val1 + val2 << std::endl;
    std::cout << "product = " << val1 * val2 << std::endl;

    return 0;
}
