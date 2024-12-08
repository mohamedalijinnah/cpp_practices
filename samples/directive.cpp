#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 200
#define DEBUG

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << ">>Check directives<<" << std::endl;
#endif
    large += small; 
    std::cout << "The large integer is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
