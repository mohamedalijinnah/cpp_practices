#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Enter your name: " << std::flush;

    std::cin >> str;

    std::cout << "Hello! Welcome " << str << ", Good to see you!" << std::endl;

    std::cout << std::endl;

    return (0);

}