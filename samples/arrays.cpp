#include <iostream>

int main(){
    int nums[5] = {745,635,741,526,145};
    float result; 

    result = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
    result /= 5;
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
