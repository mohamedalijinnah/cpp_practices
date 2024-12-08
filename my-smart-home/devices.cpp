#include "devices.h"

Device::Device(std::string name_default, device_type type_default){
    name = name_default;
    type = type_default;
}

std::string Device::get_name() const{
    return name;
}

device_type Device::get_type() const{
    return type;
}

void Device::set_name(std::string new_name){
    name = new_name;
}

void Device::set_type(device_type new_type){
    type = new_type;
}