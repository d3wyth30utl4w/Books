#include <iostream>

int main() {

    std::cout << static_cast<float>(1) / 3 << std::endl;
    std::cout << 1 / static_cast<float>(3) << std::endl;
    std::cout << 1 / 3 << std::endl;

    std::cout << std::endl;

    std::cout << static_cast<int>(10.8) + 9 <<std::endl;
    std::cout << 10.8 + 9 << std::endl;
    return 0;
}