#pragma once

#include <string>

enum class device_type {smart_plug, gateway, camera, light};

class Device{
  private:
    std::string name;
    device_type type;
public: 
    Device(std::string name_default, device_type type_default);
    std::string get_name() const;
    device_type get_type() const;
    void set_name(std::string new_name);
    void set_type(device_type new_type);


};
