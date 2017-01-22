#include <iostream>

int main(int argc, char **argv)
{
    int sum = 0, temp;
    std::cout << "please input some integer " << std::endl;
    while(std::cin >> temp)
    {
        sum +=temp;
    }

    std::cout << "the sum of the numbers is " << sum << std::endl;

    return 0;
}
