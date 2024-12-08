#include <iostream>
#include <string>

enum class device_type {smart_pulg, gateway, camera, light};

struct device{
    std::string name;
    int voltage;
    device_type type;
};

int main(){
    device my_device;
    my_device.voltage = 5;
    my_device.name = "Betsy";
    my_device.type = device_type::light;

    std::cout << my_device.name << " is a type-" << (int) my_device.type << " device." << std::endl;
    std::cout << my_device.name << " is " << my_device.voltage << " watts." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
