#include <iostream>
#include <string>

// A simple function that adds two numbers
float add(float a, float b){
    return a + b;
}

int main() {
    //Basic variable types
    int count = 10;
    float temperature = 36.6;
    bool is_armed = false;
    std::string robot_name = "AERIS_UAV";
    
    std::cout << "Robot: " << robot_name << std::endl;
    std::cout << "Temperature: " << temperature << std::endl;
    std::cout << "Armed: " << is_armed << std::endl;
    std::cout << "Count: " << count << std::endl;
    std::cout << "2.5 + 3.7: " << add(2.5,3.7) << std::endl;

    return 0;  
}
