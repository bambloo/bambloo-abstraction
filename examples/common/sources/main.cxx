#include <iostream>
#include <string>

#include <secmem.h>

using namespace bambloo;
int main(int argc, char** argv) {
    secure_vector<unsigned int> vect;
    vect.push_back(1234);

    std::cout << vect.back() << std::endl;
    vect.pop_back();
    
    return 0;
}