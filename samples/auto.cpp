#include <iostream>
#include <typeinfo>

int main(){
    
    auto number = 0;
    auto bigNumber = 9876543210;
    auto pi = 3.14f;
    auto latitude = 56.145364;
    auto longtitue = 45.132665;
    auto flag = true;
    auto character = 'C';
    auto string = "Sample string";

    std::cout << "Type info of number is " << typeid(number).name() << std::endl;
    std::cout << "Type info of bigNumber is " << typeid(bigNumber).name() << std::endl;
    std::cout << "Type info of pi is " << typeid(pi).name() << std::endl;
    std::cout << "Type info of latitude is " << typeid(latitude).name() << std::endl;
    std::cout << "Type info of longtitue is " << typeid(longtitue).name() << std::endl;
    std::cout << "Type info of flag is " << typeid(flag).name() << std::endl;
    std::cout << "Type info of character is " << typeid(character).name() << std::endl;    
    std::cout << "Type info of string is " << typeid(string).name() << std::endl;    

    std::cout << std::endl << std::endl;

    return (0);
}
