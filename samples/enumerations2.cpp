#include <iostream>
#include <cstdint>

enum class device_type {smart_pulg, gateway, camera, light};

int main(){
    int meat = 8;
    device_type a;

    a = device_type::camera;

    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
