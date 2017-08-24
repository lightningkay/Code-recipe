#include <iostream>

int main(int argc, char **argv)
{
    int sum = 0,i = 50;
    while (i <= 100) {
        sum += i++;
    }
    std::cout << "from 50 to 100, sum =" << sum << std::endl;

    while (i <= 100)
    {
        sum += i;
        ++i;
    }
    std::cout << "from 50 to 100, sum =" << sum << std::endl;

    return 0;
}
