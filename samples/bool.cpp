#include <iostream>
#include <string>

int main(){
    bool flag = false;
    std::cout << "Welcome, Enter the password!" << std::endl;
    std::string key;

    std::cin >> key;

    if(key == "")
       std::cout << "Invalid password";
    else
       flag = true;

    std::cout << "Flag is " << flag;
Test
    std::cout << std::endl;


    return (0);
}