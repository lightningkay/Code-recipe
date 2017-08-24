#include <iostream>
int main(int argc, char **argv)
{
    std::cout << "please input two numbers " << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    if (v1 < v2) {
        while (v1 <= v2) {
            std::cout << v1++ << " ";
        }
        std::cout << std::endl;
    } else {
        while (v2 <= v1) {
            std::cout << v2++ << " ";
        }
        std::cout << std::endl;
    }
}
