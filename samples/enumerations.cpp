#include <iostream>
#include <cstdint>

enum device_type {smart_pulg, gateway, camera, lights};

int main(){
    int a;

    a = camera;

    std::cout << "a = " << a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
