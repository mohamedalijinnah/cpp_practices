#include <vector>
#include <iostream>
#include <string>
#include "devices.h"

int main(){

    std::vector<Device> devices;

    devices.push_back(Device("Living room light", device_type::light));
    devices.push_back(Device("Bedroom light", device_type::light));
    devices.push_back(Device("Parking camera", device_type::camera));
    devices.push_back(Device("Doorbell camera", device_type::camera));
    devices.push_back(Device("Dinning light", device_type::light));
    devices.push_back(Device("Hue bridge", device_type::gateway));

    std::cout << "My home has " << devices.size() << " devices." << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
