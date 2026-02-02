#include <iostream>

int main(int, char**){
    std::cout << "Hello, from constructs!\n";

    int i;
    std::cout << "How old are you?" << std::endl;
    std::cin >> i;

    while (i < 0) {
        std::cout << "Your age cannot be negative. Try again!" << std::endl;
        std::cout << "How old are you?" << std::endl;
        std::cin >> i;
    }

    std::cout << "You are " << i << " years old." << std::endl;
}
