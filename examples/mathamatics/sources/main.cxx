#include <iostream>
#include <string>

#include <integer.h>

int main(int argc, char** argv) {
    std::string username;

    std::cout << "What's your name? ";
    std::cin >> username;
    
    std::cout << "Hello ~, " << username <<std::endl;
    std::cout << sizeof(Integer) << std::endl;
    std::cout << sizeof(long) <<std::endl;
    std::cout << sizeof(int) <<std::endl;
    std::cout << sizeof(size_t) << std::endl;

    Integer i(3);

    std::cout << sizeof(Word) << std::endl;
    return 0;
}