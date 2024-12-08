#include <iostream>

int main(){
    float value1, value2, result;

    std::cout << "Enter value 1: " << std::flush;
    std::cin >> value1;

    std::cout << "Enter value 2: " << std::flush;
    std::cin >> value2;

    result = value1 + value2;

    std::cout << "The result of the addition is " << result << std::endl;

    return(0);

}