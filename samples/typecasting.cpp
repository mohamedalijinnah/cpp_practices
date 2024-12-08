
#include <iostream>
#include <cstdint>

int main(){
    float number;
    int32_t signedInt;
    uint32_t unsignedInt;

    number = -986.236;
    signedInt = number;
    unsignedInt = signedInt;

    std::cout << " float: " << number << std::endl;
    std::cout << " int32: " << signedInt << std::endl;
    std::cout << "uint32: without type casting : ( X wrong ) " <<  unsignedInt << std::endl;
    std::cout << "uint32: " << (int32_t) unsignedInt << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
